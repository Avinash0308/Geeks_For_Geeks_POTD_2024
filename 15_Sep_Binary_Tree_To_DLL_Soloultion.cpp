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


    // This function should return head to the DLL
    class Solution
{
public:
    pair<Node *, Node *> solve(Node *root)
    {
        if (!root)
            return {NULL, NULL};
        pair<Node *, Node *> left = solve(root->left);
        pair<Node *, Node *> right = solve(root->right);
        root->left = left.second;
        root->right = right.first;
        if (left.second)
        {
            left.second->right = root;
        }
        if (right.first)
        {
            right.first->left = root;
        }
        pair<Node *, Node *> res;
        if (left.first)
            res.first = left.first;
        else
            res.first = root;
        if (right.second)
            res.second = right.second;
        else
            res.second = root;
        return res;
    }
    Node *bToDLL(Node *root)
    {
        // code here
        pair<Node *, Node *> p = solve(root);
        return p.first;
    }
};

int main()
{
    return 0;
}