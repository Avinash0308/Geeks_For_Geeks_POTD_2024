#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int find(int ind, int &ans, unordered_map<int, vector<int>> &mp)
    {
        if (mp.count(ind) == 0)
            return 1;
        int pre = 1;
        for (auto m : mp[ind])
        {
            int val = find(m, ans, mp);
            if (val % 2 == 0)
                ans++;
            pre += val;
        }
        return pre;
    }
    int minimumEdgeRemove(int n, vector<vector<int>> edges)
    {
        // Code here
        unordered_map<int, vector<int>> mp;
        for (auto edge : edges)
        {
            if (edge[0] == 1)
                break;
            if (edge[1] == 1)
            {
                for (int i = 0; i < n - 1; i++)
                {
                    swap(edges[i][0], edges[i][1]);
                }
            }
        }
        for (auto edge : edges)
        {
            mp[edge[0]].push_back(edge[1]);
        }
        int ans = 0;
        find(1, ans, mp);
        return ans;
    }
};

int main()
{
    return 0;
}