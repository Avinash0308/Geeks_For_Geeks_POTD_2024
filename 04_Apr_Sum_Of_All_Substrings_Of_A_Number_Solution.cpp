#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find sum of all possible substrings of the given string.
    long long sumSubstrings(string s)
    {
        int n = s.size();
        long long mod = 1e9 + 7;
        vector<long long> v(n);
        v[0] = s[0] - '0';
        for (int i = 1; i < n; i++)
        {
            long long val = s[i] - '0';
            v[i] = ((v[i - 1] * 10) % mod + ((i + 1) * val) % mod) % mod;
        }
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = (ans + v[i]) % mod;
        }
        return ans;
    }
};

int main()
{
    return 0;
}