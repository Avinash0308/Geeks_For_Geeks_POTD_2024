#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long solve(vector<vector<int>> &arr, int x, int y, int k, vector<vector<vector<long long>>> &dp)
    {
        if (x >= arr.size() || y >= arr.size() || x < 0 || y < 0 || k < 0)
            return 0;
        if (dp[x][y][k] != -1)
            return dp[x][y][k];
        if (x == 0 && y == 0 && arr[x][y] == k)
            return dp[x][y][k] = 1;
        return dp[x][y][k] = solve(arr, x - 1, y, k - arr[x][y], dp) + solve(arr, x, y - 1, k - arr[x][y], dp);
    }
    long long numberOfPath(int n, int k, vector<vector<int>> &arr)
    {

        // Code Here
        vector<vector<vector<long long>>> dp(n, vector<vector<long long>>(n, vector<long long>(k + 1, -1)));
        return solve(arr, n - 1, n - 1, k, dp);
    }
};