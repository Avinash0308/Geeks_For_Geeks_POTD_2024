#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int mod = 1e9 + 7;

public:
    void solve(int n, vector<int> &ans)
    {
        if (n <= 1)
            return;
        solve(n - 1, ans);
        ans[n] = (ans[n - 1] + ans[n - 2]) % mod;
    }
    vector<int> Series(int n)
    {
        // Code here
        vector<int> ans(n + 1);
        ans[0] = 0;
        ans[1] = 1;
        solve(n, ans);
        return ans;
    }
};

int main()
{
    return 0;
}