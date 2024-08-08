#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

// Should return true if tree is Sum Tree, else false
class Solution
{
public:
    int solve(Node *root)
    {
        if (!root)
            return 0;
        if (!(root->left) && !(root->right))
            return root->data;
        int left = solve(root->left);
        int right = solve(root->right);
        if (left != -1 && right != -1 && left + right == root->data)
            return 2 * root->data;
        else
            return -1;
    }
    bool isSumTree(Node *root)
    {
        // Your code here
        int ans = solve(root);
        return ans != -1;
    }
};

int main()
{
    return 0;
}