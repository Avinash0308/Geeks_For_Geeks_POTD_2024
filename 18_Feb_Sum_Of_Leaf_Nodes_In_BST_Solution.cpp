#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
};

    class Solution
{
public:
    /*You are required to complete below method */
    int sumOfLeafNodes(Node *root)
    {
        /*Your code here */
        if (!root)
            return 0;
        if (!(root->left) && !(root->right))
            return root->data;
        return sumOfLeafNodes(root->left) + sumOfLeafNodes(root->right);
    }
};