#include<bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode* child[26];
    bool isend;

    TrieNode(char data)
    {
        this->data = data;

        for(int i = 0; i < 26; i++)
            child[i] = NULL;

        isend = false;
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
        // Base case
        if(word.length() == 0)
        {
            root->isend = true;
            return;
        }

        int index = word[0] - 'A';

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
            root->child[index] = children;
        }

        insertUtil(children, word.substr(1));
    }

    void insert(string word)
    {
        insertUtil(root, word);
    }


    // SEARCH
    bool serachUtil(TrieNode* root, string word)
    {
        // Base case
        if(word.length() == 0)
        {
            return root->isend;
        }

        int index = word[0] - 'A';

        // Character not present
        if(root->child[index] == NULL)
        {
            return false;
        }

        TrieNode* children = root->child[index];

        return serachUtil(children, word.substr(1));
    }

    bool serach(string word)
    {
        return serachUtil(root, word);
    }


    // REMOVE
    bool removeUtil(TrieNode* root, string word)
    {
        // Base case
        if(word.length() == 0)
        {
            // Word doesn't exist
            if(root->isend == false)
            {
                return false;
            }

            // Mark word as deleted
            root->isend = false;

            // Check if node has children
            for(int i = 0; i < 26; i++)
            {
                if(root->child[i] != NULL)
                {
                    return false;
                }
            }

            // No children -> delete this node
            return true;
        }

        int index = word[0] - 'A';

        // Character not present
        if(root->child[index] == NULL)
        {
            return false;
        }

        TrieNode* children = root->child[index];

        bool deletechild = removeUtil(children, word.substr(1));

        if(deletechild)
        {
            delete children;
            root->child[index] = NULL;

            // Current node can be deleted if:
            // 1. It is not the end of another word
            // 2. It has no children

            if(root->isend == false)
            {
                for(int i = 0; i < 26; i++)
                {
                    if(root->child[i] != NULL)
                    {
                        return false;
                    }
                }

                return true;
            }
        }

        return false;
    }

    void remove(string word)
    {
        removeUtil(root, word);
    }
};


int main()
{
    Trie* t = new Trie();

    t->insert("ABCD");

    cout << "Present or not: "
         << t->serach("ABCD") << endl;

    t->remove("ABCD");

    cout << "Present or not: "
         << t->serach("ABCD") << endl;

    return 0;
}