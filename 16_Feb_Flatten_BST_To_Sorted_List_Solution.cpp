#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

    class Solution
{
    pair<Node *, Node *> solve(Node *root)
    {
        if (!root)
            return {NULL, NULL};
        pair<Node *, Node *> left = solve(root->left);
        pair<Node *, Node *> right = solve(root->right);
        Node *start = NULL, *end = NULL;
        if (left.first != NULL)
        {
            start = left.first;
            left.second->right = root;
        }
        else
            start = root;
        root->right = right.first;
        if (right.second)
        {
            end = right.second;
        }
        else
        {
            end = root;
        }
        root->left = NULL;
        return {start, end};
    }

public:
    Node *flattenBST(Node *root)
    {
        // code here
        pair<Node *, Node *> p = solve(root);
        return p.first;
    }
};