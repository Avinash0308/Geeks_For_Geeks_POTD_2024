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
    void solve(Node *root, vector<int> &cur, vector<vector<int>> &ans)
    {
        if (!root)
            return;
        cur.push_back(root->data);
        if (!root->left && !root->right)
            ans.push_back(cur);
        solve(root->left, cur, ans);
        solve(root->right, cur, ans);
        cur.pop_back();
        return;
    }
    vector<vector<int>> Paths(Node *root)
    {
        // code here
        vector<int> cur;
        vector<vector<int>> ans;
        solve(root, cur, ans);
        return ans;
    }
};

int main()
{
    return 0;
}