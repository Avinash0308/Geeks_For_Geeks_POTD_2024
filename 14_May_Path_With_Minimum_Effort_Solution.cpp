#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int MinimumEffort(int r, int c, vector<vector<int>> &heights)
    {
        // code here
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        vector<vector<int>> dp(r, vector<int>(c, INT_MAX));
        vector<vector<int>> dir = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
        pq.push({0, 0, 0});
        while (!pq.empty())
        {
            int effort = pq.top()[0], x = pq.top()[1], y = pq.top()[2];
            pq.pop();
            if (x == r - 1 && y == c - 1)
                return effort;
            if (effort >= dp[x][y])
                continue;
            dp[x][y] = effort;
            for (auto direct : dir)
            {
                int i = direct[0] + x, j = direct[1] + y;
                if (i < 0 || i >= r || j < 0 || j >= c)
                    continue;
                int eff = max(effort, abs(heights[i][j] - heights[x][y]));
                pq.push({eff, i, j});
            }
        }
        return 1e6;
    }
};

int main()
{
    return 0;
}