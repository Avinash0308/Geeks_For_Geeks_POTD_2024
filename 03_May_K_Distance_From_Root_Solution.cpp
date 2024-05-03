#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

    class Solution
{
public:
    // function should print the nodes at k distance from root
    void solve(vector<int> &ans, Node *root, int k, int dis)
    {
        if (!root)
            return;
        if (dis == k)
            ans.push_back(root->data);
        solve(ans, root->left, k, dis + 1);
        solve(ans, root->right, k, dis + 1);
    }
    vector<int> Kdistance(struct Node *root, int k)
    {
        // Your code here
        vector<int> ans;
        solve(ans, root, k, 0);
        return ans;
    }
};

int main()
{
    return 0;
}