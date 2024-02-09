#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

class Solution
{
public:
    // Function to check whether all nodes of a tree have the value
    // equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
        // Ad your code here
        if (!root)
            return 1;
        if (!(root->left) && !(root->right))
            return 1;
        int data = 0;
        if (root->left)
            data += root->left->data;
        if (root->right)
            data += root->right->data;
        if (data != root->data)
            return 0;
        if (!isSumProperty(root->left) || !isSumProperty(root->right))
            return 0;
        return 1;
    }
};