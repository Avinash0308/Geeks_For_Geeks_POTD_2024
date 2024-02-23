#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // User function Template for C++

    int maxProfit(vector<int> &price)
    {
        // Write your code here..
        int n = price.size();
        vector<int> left(n), right(n);
        int low = INT_MAX, high = INT_MIN;
        int lefty = 0, righty = 0;
        for (int i = 0; i < n; i++)
        {
            if (low > price[i])
            {
                low = price[i];
            }
            if (high < price[n - 1 - i])
            {
                high = price[n - 1 - i];
            }
            lefty = max(lefty, price[i] - low);
            righty = max(righty, high - price[n - 1 - i]);
            left[i] = lefty;
            right[n - 1 - i] = righty;
        }
        int ans = max(right[0], left[n - 1]);
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, left[i] + right[i + 1]);
        }
        return ans;
    }
};