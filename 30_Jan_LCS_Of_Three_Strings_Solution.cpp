#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int solve(int x, int y, int z, string &a, string &b, string &c, vector<vector<vector<int>>> &dp)
    {
        if (x >= a.size() || y >= b.size() || z >= c.size())
            return 0;
        if (dp[x][y][z] != -1)
            return dp[x][y][z];
        if (a[x] == b[y] && a[x] == c[z])
            return dp[x][y][z] = 1 + solve(x + 1, y + 1, z + 1, a, b, c, dp);
        if (a[x] == b[y])
        {
            return dp[x][y][z] = max(solve(x, y, z + 1, a, b, c, dp), solve(x + 1, y + 1, z, a, b, c, dp));
        }
        else if (a[x] == c[z])
        {
            return dp[x][y][z] = max(solve(x, y + 1, z, a, b, c, dp), solve(x + 1, y, z + 1, a, b, c, dp));
        }
        else if (b[y] == c[z])
        {
            return dp[x][y][z] = max(solve(x + 1, y, z, a, b, c, dp), solve(x, y + 1, z + 1, a, b, c, dp));
        }
        else
        {
            return dp[x][y][z] = max({solve(x, y, z + 1, a, b, c, dp), solve(x, y + 1, z, a, b, c, dp), solve(x + 1, y, z, a, b, c, dp)});
        }
    }

public:
    int LCSof3(string A, string B, string C, int n1, int n2, int n3)
    {
        // your code here
        vector<vector<vector<int>>> dp(n1, vector<vector<int>>(n2, vector<int>(n3, -1)));
        return solve(0, 0, 0, A, B, C, dp);
    }
};