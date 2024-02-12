#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long sequence(int n)
    {
        // code here
        long long ans = 0;
        long long mod = 1e9 + 7;
        long long ind = 1;
        for (long long i = 1; i <= n; i++)
        {
            long long val = i;
            long long cur = 1;
            while (val--)
            {
                cur = (cur * ind) % mod;
                ind++;
            }
            ans = (ans + cur) % mod;
        }
        return ans;
    }
};