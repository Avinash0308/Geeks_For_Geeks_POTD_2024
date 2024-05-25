#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    /*You are requried to complete this method */
    long long max_Books(int arr[], int n, int k)
    {
        // Your code here
        long long ans = 0;
        long long cur = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= k)
                cur += arr[i];
            else
                cur = 0;
            ans = max(ans, cur);
        }
        return ans;
    }
};

int main()
{
    return 0;
}