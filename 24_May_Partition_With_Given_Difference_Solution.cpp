#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int MOD = 1e9 + 7;

public:
    int countPartitions(int n, int d, vector<int> &arr)
    {

        int sum = accumulate(arr.begin(), arr.end(), 0);

        int target = (d + sum) / 2;

        if ((d + sum) % 2 != 0)
        {

            return 0;
        }

        vector<int> dp(target + 1, 0);

        dp[0] = 1;

        for (int num : arr)
        {

            for (int j = target; j >= num; --j)
            {

                dp[j] = (dp[j] + dp[j - num]) % MOD;
            }
        }

        return dp[target];
    }
};

int main()
{
    return 0;
}