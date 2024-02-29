#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long sumBitDifferences(int arr[], int n)
    {
        // code here
        long long ans = 0;
        for (int i = 0; i < 31; i++)
        {
            long long int one = 0;
            long long int val = 1 << i;
            for (int j = 0; j < n; j++)
            {
                if (arr[j] & val)
                    one++;
            }
            ans += (one * (n - one));
        }
        return ans * 2;
    }
};