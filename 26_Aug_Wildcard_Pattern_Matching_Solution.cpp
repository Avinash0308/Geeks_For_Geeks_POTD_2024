#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    /*You are required to complete this method*/
    int solve(int i, int j, string &pattern, string &str, int n, int m, vector<vector<int>> &dp)
    {
        if (dp[i][j] != -1)
            return dp[i][j];
        if (i == n && j == m)
            return dp[i][j] = 1;
        if (i == n)
            return dp[i][j] = 0;
        if (j == m)
        {
            int ind = i;
            while (ind < n && pattern[ind] == '*')
                ind++;
            if (ind == n)
                return dp[i][j] = 1;
            else
                return dp[i][j] = 0;
        }
        if (pattern[i] != '*' && pattern[i] != '?')
        {
            if (pattern[i] == str[j])
                return dp[i][j] = solve(i + 1, j + 1, pattern, str, n, m, dp);
            else
                return dp[i][j] = 0;
        }
        else if (pattern[i] == '?')
            return dp[i][j] = solve(i + 1, j + 1, pattern, str, n, m, dp);
        else
        {
            for (int ind = j; ind <= m; ind++)
            {
                if (solve(i + 1, ind, pattern, str, n, m, dp))
                    return dp[i][j] = 1;
            }
            return dp[i][j] = 0;
        }
    }
    int wildCard(string pattern, string str)
    {
        // code here
        int n = pattern.size(), m = str.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        return solve(0, 0, pattern, str, n, m, dp);
    }
};

int main()
{
    return 0;
}