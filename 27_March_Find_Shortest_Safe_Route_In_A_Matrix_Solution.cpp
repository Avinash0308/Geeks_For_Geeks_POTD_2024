#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findShortestPath(vector<vector<int>> &mat)
    {
        // code here
        int n = mat.size(), m = mat[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 0)
                {
                    if (j > 0 && mat[i][j - 1] != 0)
                        mat[i][j - 1] = -1;
                    if (i > 0 && mat[i - 1][j] != 0)
                        mat[i - 1][j] = -1;
                    if (i < n - 1 && mat[i + 1][j] != 0)
                        mat[i + 1][j] = -1;
                    if (j < m - 1 && mat[i][j + 1] != 0)
                        mat[i][j + 1] = -1;
                }
                else if (mat[i][j] == -1)
                    continue;
                else
                {
                    mat[i][j] = INT_MAX;
                }
            }
        }
        queue<vector<int>> q;
        for (int i = 0; i < n; i++)
        {
            q.push({i, 0, 1});
        }
        int ans = INT_MAX;
        while (!q.empty())
        {
            int x = q.front()[0];
            int y = q.front()[1];
            int v = q.front()[2];
            q.pop();
            if (x >= 0 && x < n && y >= 0 && y < m && (mat[x][y] != 0) && (mat[x][y] != -1) && mat[x][y] > v)
            {
                q.push({x - 1, y, v + 1});
                q.push({x, y - 1, v + 1});
                q.push({x + 1, y, v + 1});
                q.push({x, y + 1, v + 1});
                mat[x][y] = v;
                if (y == m - 1)
                    ans = min(ans, v);
            }
        }
        if (ans == INT_MAX)
            return -1;
        return ans;
    }
};

int main()
{
    return 0;
}