#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findCity(int n, int m, vector<vector<int>> &edges, int distanceThreshold)
    {
        // Your code here
        unordered_map<int, vector<pair<int, int>>> mp;
        for (auto edge : edges)
        {
            mp[edge[0]].push_back({edge[1], edge[2]});
            mp[edge[1]].push_back({edge[0], edge[2]});
        }
        int ans = -1, value = n + 1;
        for (int i = 0; i < n; i++)
        {
            queue<pair<int, int>> q;
            q.push({i, 0});
            vector<int> visit(n, INT_MAX);
            int cities = 0;
            while (!(q.empty()))
            {
                int ind = q.front().first;
                int wei = q.front().second;
                q.pop();
                if (visit[ind] <= wei || wei > distanceThreshold)
                    continue;
                if (visit[ind] == INT_MAX)
                    cities++;
                visit[ind] = wei;
                for (auto edge : mp[ind])
                {
                    q.push({edge.first, edge.second + wei});
                }
            }
            if (value >= cities)
            {
                value = cities;
                ans = i;
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}