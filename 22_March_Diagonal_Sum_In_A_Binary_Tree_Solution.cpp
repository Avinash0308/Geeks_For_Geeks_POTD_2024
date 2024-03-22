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
    void solve(Node *root, int ind, unordered_map<int, int> &mp)
    {
        if (!root)
            return;
        mp[ind] += root->data;
        solve(root->right, ind, mp);
        solve(root->left, ind + 1, mp);
    }
    vector<int> diagonalSum(Node *root)
    {
        // Add your code here
        unordered_map<int, int> mp;
        solve(root, 0, mp);
        vector<int> ans;
        for (int i = 0; mp.count(i) != 0; i++)
        {
            ans.push_back(mp[i]);
        }
        return ans;
    }
};

int main()
{
    return 0;
}