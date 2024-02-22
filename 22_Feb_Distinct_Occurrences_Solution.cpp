#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subsequenceCount(string s, string t)
    {
        // Your code here
        long long int mod = 1e9 + 7;
        long long int n = s.size(), m = t.size();
        vector<long long int> dp(n + 1, 1);
        vector<long long int> temp(n + 1);
        for (long long int i = 0; i < m; i++)
        {
            for (long long int j = 0; j < n; j++)
            {
                if (s[j] == t[i])
                {
                    temp[j + 1] = (temp[j] + dp[j]) % mod;
                }
                else
                {
                    temp[j + 1] = temp[j];
                }
            }
            dp = temp;
        }
        return dp[n];
    }
};