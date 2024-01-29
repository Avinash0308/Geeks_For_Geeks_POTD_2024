#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int solve(int ind, string &str, int last, vector<vector<int>> &dp)
    {
        if (ind >= str.size())
        {
            return 1;
        }
        if (dp[ind][last] != -1)
            return dp[ind][last];
        int sum = 0, ans = 0;
        for (int i = ind; i < str.size(); i++)
        {
            sum += str[i] - '0';
            if (sum >= last)
            {
                ans += solve(i + 1, str, sum, dp);
            }
        }
        return dp[ind][last] = ans;
    }
    int TotalCount(string str)
    {
        // Code here
        int n = str.size();
        vector<vector<int>> dp(n, vector<int>(1000, -1));
        int ans = solve(0, str, 0, dp);
        return ans;
    }
};