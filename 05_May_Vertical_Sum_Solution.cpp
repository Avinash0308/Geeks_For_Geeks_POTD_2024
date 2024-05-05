#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};
class Solution
{
public:
    void solve(Node *root, int ind, unordered_map<int, int> &ans, int &miny)
    {
        if (!root)
            return;
        miny = min(miny, ind);
        ans[ind] += root->data;
        solve(root->left, ind - 1, ans, miny);
        solve(root->right, ind + 1, ans, miny);
    }
    vector<int> verticalSum(Node *root)
    {
        // add code here.
        unordered_map<int, int> ans;
        int miny = INT_MAX;
        solve(root, 0, ans, miny);
        vector<int> res;
        for (int i = miny; ans.count(i) != 0; i++)
        {
            res.push_back(ans[i]);
        }
        return res;
    }
};

int main()
{
    return 0;
}