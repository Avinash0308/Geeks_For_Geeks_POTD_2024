#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// Return the root of the modified tree after removing all the half nodes.
class Solution
{
public:
    Node *RemoveHalfNodes(Node *root)
    {
        // code here
        if (!root)
            return NULL;
        root->left = RemoveHalfNodes(root->left);
        root->right = RemoveHalfNodes(root->right);
        if (root->left && !root->right)
            return root->left;
        if (root->right && !root->left)
            return root->right;
        return root;
    }
};

int main()
{
    return 0;
}