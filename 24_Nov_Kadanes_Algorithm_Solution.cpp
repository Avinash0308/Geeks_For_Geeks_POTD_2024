#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n)
{
    // code here
    int ans = -1e9;
    int cur = 0;
    for (int i = 0; i < n; i++)
    {
        cur += arr[i];
        if (ans < cur)
            ans = cur;
        if (cur < 0)
            cur = 0;
    }
    return ans;
}

int main()
{
    return 0;
}