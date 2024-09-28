#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimizeCost(int k, vector<int> &arr)
    {
        // Code here
        int n = arr.size();
        vector<int> ans(n, INT_MAX);
        ans[0] = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= k && i + j < n; j++)
            {
                ans[j + i] = min(ans[j + i], ans[i] + abs(arr[i] - arr[j + i]));
            }
        }
        return ans[n - 1];
    }
};

int main()
{
    return 0;
}