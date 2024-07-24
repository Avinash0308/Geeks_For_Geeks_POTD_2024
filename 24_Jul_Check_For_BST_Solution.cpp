#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
};

class Solution
{
public:
    // Function to check whether a Binary Tree is BST or not.
    bool solve(Node *root, long long int large, long long int small)
    {
        if (!root)
            return true;
        if (root->data <= small || root->data >= large)
            return false;
        if (!solve(root->left, root->data, small) || !solve(root->right, large, root->data))
            return false;
        return true;
    }

    bool isBST(Node *root)
    {
        // Your code here
        return solve(root, INT_MAX, INT_MIN);
    }
};

int main()
{
    return 0;
}