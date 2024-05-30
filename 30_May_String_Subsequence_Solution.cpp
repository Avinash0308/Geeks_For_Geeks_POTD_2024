#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countWays(string s1, string s2)
    {
        // code here
        long long int n = s1.size(), m = s2.size();
        vector<vector<long long int>> dp(n + 1, vector<long long int>(m + 1, 0));
        long long int mod = 1e9 + 7;
        for (int i = 0; i <= n; i++)
            dp[i][0] = 1;
        for (long long int i = 1; i <= n; i++)
        {
            for (long long int j = 1; j <= m; j++)
            {
                if (s1[i - 1] == s2[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                dp[i][j] = (dp[i][j] + dp[i - 1][j]) % mod;
            }
        }
        return dp[n][m];
    }
};

int main()
{
    return 0;
}