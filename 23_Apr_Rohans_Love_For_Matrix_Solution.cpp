#include <bits/stdc++.h>
using namespace std;

class Solution
{
    long long int mod = 1e9 + 7;
    vector<vector<long long int>> base;

public:
    void multiply(vector<vector<long long int>> &a, vector<vector<long long int>> &base)
    {
        vector<vector<long long int>> ans(2, vector<long long int>(2));
        ans[0][0] = ((a[0][0] * base[0][0]) % mod + (a[0][1] * base[1][0]) % mod) % mod;
        ans[0][1] = ((a[0][0] * base[0][1]) % mod + (a[0][1] * base[1][1]) % mod) % mod;
        ans[1][0] = ((a[1][0] * base[0][0]) % mod + (a[1][1] * base[1][0]) % mod) % mod;
        ans[1][1] = ((a[1][0] * base[0][1]) % mod + (a[1][1] * base[1][1]) % mod) % mod;
        a = ans;
    }
    void solve(long long int mul, vector<vector<long long int>> &v)
    {
        if (mul == 1)
            return;
        solve(mul / 2, v);
        multiply(v, v);
        if (mul % 2)
            multiply(v, base);
    }
    int firstElement(int n)
    {
        // code here
        vector<vector<long long int>> v;
        v.push_back({1, 1});
        v.push_back({1, 0});
        base = v;
        solve(n, v);
        return v[1][0];
    }
};

int main()
{
    return 0;
}