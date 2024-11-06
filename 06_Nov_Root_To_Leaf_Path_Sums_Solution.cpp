#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

class Solution
{
    int ans = 0;

public:
    void solve(Node *root, int prev)
    {
        if (!root)
            return;
        prev *= 10;
        prev += root->data;
        if (!root->left && !root->right)
            ans += prev;
        solve(root->left, prev);
        solve(root->right, prev);
    }
    int treePathsSum(Node *root)
    {
        // code here.
        solve(root, 0);
        return ans;
    }
};

int main()
{
    return 0;
}