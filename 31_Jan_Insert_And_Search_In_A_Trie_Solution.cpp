#include <bits/stdc++.h>
using namespace std;
// trie node
#define ALPHABET_SIZE (26)

struct TrieNode
{
    struct TrieNode *children[ALPHABET_SIZE];

    // isLeaf is true if the node represents
    // end of a word
    bool isLeaf;
};

struct TrieNode *getNode()
{
    TrieNode *pNode = NULL;
    pNode = (struct TrieNode *)malloc(sizeof(struct TrieNode));
    if (pNode)
    {
        int i;
        pNode->isLeaf = false;
        for (i = 0; i < ALPHABET_SIZE; i++)
        {
            pNode->children[i] = NULL;
        }
    }
    return pNode;
}

class Solution
{
public:
    // Function to insert string into TRIE.
    void insert(struct TrieNode *root, string key)
    {
        // code here
        for (auto c : key)
        {
            if (root->children[c - 'a'] == NULL)
                root->children[c - 'a'] = getNode();
            root = root->children[c - 'a'];
        }
        root->isLeaf = true;
    }

    // Function to use TRIE data structure and search the given string.
    bool search(struct TrieNode *root, string key)
    {
        // code here
        for (auto c : key)
        {
            if (root == NULL || root->children[c - 'a'] == NULL)
                return false;
            root = root->children[c - 'a'];
        }
        return root->isLeaf;
    }
};