#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>> &grid)
    {
        // Code here
        vector<vector<int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
        int n = grid.size(), m = grid[0].size(), ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '1')
                {
                    ans++;
                    queue<vector<int>> q;
                    q.push({i, j});
                    while (!q.empty())
                    {
                        int x = q.front()[0], y = q.front()[1];
                        q.pop();
                        if (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == '1')
                        {
                            grid[x][y] = '0';
                            for (auto k : dir)
                            {
                                q.push({x + k[0], y + k[1]});
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}