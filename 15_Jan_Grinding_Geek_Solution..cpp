#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int solve(int ind, int n, vector<vector<int>> &dp, int cur, vector<int> &cost)
    {
        if (ind >= n)
            return 0;
        if (dp[ind][cur] != -1)
            return dp[ind][cur];
        int first_pos = solve(ind + 1, n, dp, cur, cost);
        int second_pos = (cost[ind] > cur) ? 0 : (1 + solve(ind + 1, n, dp, cur - ((float)cost[ind] / 10), cost));
        return dp[ind][cur] = max(first_pos, second_pos);
    }
    int max_courses(int n, int total, vector<int> &cost)
    {
        // Code Here
        vector<vector<int>> dp(n, vector<int>(total + 1, -1));
        return solve(0, n, dp, total, cost);
    }
};