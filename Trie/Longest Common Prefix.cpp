#include <bits/stdc++.h>
using namespace std;

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

    void lcp(string word, string &ans)
    {
        for(int i = 0; i < word.length(); i++)
        {
            char ch = word[i];

            if(root->childcount == 1)
            {
                ans.push_back(ch);

                int index = ch - 'a';

                root = root->child[index];
            }
            else
            {
                break;
            }

            if(root->isend)
                break;
        }
    }
};

string longestCommonPrefix(vector<string> &arr, int n)
{
    Trie* t = new Trie();

    for(int i = 0; i < n; i++)
    {
        t->insert(arr[i]);
    }

    string ans = "";

    t->lcp(arr[0], ans);

    return ans;
}