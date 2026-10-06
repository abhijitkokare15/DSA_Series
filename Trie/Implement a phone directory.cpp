class TrieNode
{
public:
    char data;
    TrieNode* child[26];
    bool isend;
    int childcount;

    TrieNode(char data)
    {
        this->data = data;

        for(int i = 0; i < 26; i++)
            child[i] = NULL;

        isend = false;
        childcount = 0;
    }
};

class Trie
{
public:
    TrieNode* root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    // INSERT
    void insertUtil(TrieNode* root, string word)
    {
        if(word.length() == 0)
        {
            root->isend = true;
            return;
        }

        int index = word[0] - 'a';

        TrieNode* children;

        // Present
        if(root->child[index] != NULL)
        {
            children = root->child[index];
        }

        // Absent
        else
        {
            children = new TrieNode(word[0]);
            root->childcount++;
            root->child[index] = children;
        }

        insertUtil(children, word.substr(1));
    }

    void insert(string word)
    {
        insertUtil(root, word);
    }

    // To print the suggestions
    void printSuggestion(TrieNode* curr, vector<string>& temp, string prefix)
    {
        // If it is a terminal node
        if(curr->isend)
        {
            temp.push_back(prefix);
        }

        for(char i = 'a'; i <= 'z'; i++)
        {
            TrieNode* next = curr->child[i - 'a'];

            if(next != NULL)
            {
                prefix.push_back(i);

                printSuggestion(next, temp, prefix);

                prefix.pop_back();
            }
        }
    }

    // Function
    vector<vector<string>> getSuggestion(string que)
    {
        TrieNode* prev = root;
        string prefix = "";

        vector<vector<string>> output;

        for(int i = 0; i < que.length(); i++)
        {
            char lastchar = que[i];
            prefix.push_back(lastchar);

            // Check if last char is present in Trie
            TrieNode* curr = prev->child[lastchar - 'a'];

            // If not found
            if(curr == NULL)
                break;

            // If found
            vector<string> temp;

            // Print suggestion
            printSuggestion(curr, temp, prefix);

            output.push_back(temp);

            temp.clear();
            prev = curr;
        }

        return output;
    }
};


vector<vector<string>> phoneDirectory(vector<string>& contactList, string &que)
{
    Trie* t = new Trie();

    // Insert all the contact list in the Trie
    for(int i = 0; i < contactList.size(); i++)
    {
        string str = contactList[i];

        t->insert(str);
    }

    // Return answer
    return t->getSuggestion(que);
}