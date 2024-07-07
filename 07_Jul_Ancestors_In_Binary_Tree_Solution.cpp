#include <bits/stdc++.h>
using namespace std;

/*
Structure of a node is as following
*/
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

class Solution
{
public:
    // Function should return all the ancestor of the target node
    void solve(Node *root, int target, vector<int> &cur, vector<int> &ans)
    {
        if (!root)
            return;
        if (root->data == target)
        {
            ans = cur;
        }
        cur.push_back(root->data);
        solve(root->left, target, cur, ans);
        solve(root->right, target, cur, ans);
        cur.pop_back();
    }
    vector<int> Ancestors(struct Node *root, int target)
    {
        // Code here
        vector<int> cur;
        vector<int> ans;
        solve(root, target, cur, ans);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    return 0;
}