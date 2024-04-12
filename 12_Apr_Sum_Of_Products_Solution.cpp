#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long pairAndSum(int n, long long arr[])
    {
        // code here
        long long ans = 0;
        long long val = 1;
        for (int i = 0; i <= 30; i++)
        {
            long long count = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] & val)
                    count++;
            }
            ans += ((count * (count - 1)) / 2) * val;
            val <<= 1;
        }
        return ans;
    }
};

int main()
{
    return 0;
}