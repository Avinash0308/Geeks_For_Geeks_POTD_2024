#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int key;
	struct Node *left, *right;
};

class Solution
{
    public:
    void solve(Node* root, int sum, int cur_sum, vector<int> &cur, vector<vector<int>> &ans){
        if(!root) return ;
        cur_sum += root->key;
        cur.push_back(root->key);
        if(cur_sum == sum) ans.push_back(cur);
        solve(root->left,sum,cur_sum,cur,ans);
        solve(root->right,sum,cur_sum,cur,ans);
        cur_sum -= root->key;
        cur.pop_back();
        return;
    }
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        //code here
        vector<vector<int>> ans;
        vector<int> cur;
        int cur_sum = 0;
        solve(root,sum,cur_sum,cur,ans);
        return ans;
    }
};