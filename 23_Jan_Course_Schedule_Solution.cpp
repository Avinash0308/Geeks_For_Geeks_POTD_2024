#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int solve(vector<vector<int>> &pre, vector<int> &ans, vector<int> &visit, int ind)
    {
        int n = visit.size();
        if (visit[ind])
            return visit[ind];
        visit[ind] = -1;
        for (int i = 0; i < pre[ind].size(); i++)
        {
            int res = solve(pre, ans, visit, pre[ind][i]);
            if (res == -1)
                return -1;
        }
        visit[ind] = 1;
        ans.push_back(ind);
        return 1;
    }

public:
    vector<int> findOrder(int n, int m, vector<vector<int>> req)
    {
        // code here
        vector<int> ans;
        vector<vector<int>> pre(n);
        for (int i = 0; i < m; i++)
        {
            int x = req[i][0], y = req[i][1];
            pre[x].push_back(y);
        }
        vector<int> visit(n);
        for (int i = 0; i < n; i++)
        {
            int res = solve(pre, ans, visit, i);
            if (res == -1)
                return {};
        }
        return ans;
    }
};