#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> shortestPath(vector<vector<int>> &edges, int N, int M, int src)
    {
        // code here
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < M; i++)
        {
            mp[edges[i][0]].push_back(edges[i][1]);
            mp[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> visit(N, -1);
        queue<int> q;
        q.push(src);
        int cur = 0;
        while (!q.empty())
        {
            int len = q.size();
            for (int i = 0; i < len; i++)
            {
                int val = q.front();
                q.pop();
                if (visit[val] == -1)
                {
                    visit[val] = cur;
                    for (auto j : mp[val])
                    {
                        q.push(j);
                    }
                }
            }
            cur++;
        }
        return visit;
    }
};

int main()
{
    return 0;
}