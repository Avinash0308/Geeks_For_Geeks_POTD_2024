#include <bits/stdc++.h>
using namespace std;

class Solution
{
    long long int mod = 1e9 + 7;

public:
    long long int solve(long long int val)
    {
        if (val == 0)
            return 1;
        long long int val1 = solve(val / 2);
        val1 = (val1 * val1) % mod;
        if (val % 2)
        {
            val1 = (val1 * 2) % mod;
        }
        return val1;
    }
    int countgroup(vector<int> &arr)
    {
        // Complete the function
        int x = 0;
        for (auto i : arr)
        {
            x ^= i;
        }
        if (x)
            return 0;
        return (solve(arr.size() - 1) - 1) % mod;
    }
};

int main()
{
    return 0;
}