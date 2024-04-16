#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimizeDifference(int n, int k, vector<int> &arr)
    {
        // code here
        vector<int> left_max(n), left_min(n), right_max(n), right_min(n);
        int cur_min = INT_MAX, cur_max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cur_max = max(cur_max, arr[i]);
            left_max[i] = cur_max;
            cur_min = min(cur_min, arr[i]);
            left_min[i] = cur_min;
        }
        cur_min = INT_MAX, cur_max = INT_MIN;
        for (int i = n - 1; i >= 0; i--)
        {
            cur_max = max(cur_max, arr[i]);
            right_max[i] = cur_max;
            cur_min = min(cur_min, arr[i]);
            right_min[i] = cur_min;
        }
        int ans = min(abs(right_max[k] - right_min[k]), abs(left_max[n - 1 - k] - left_min[n - 1 - k]));
        for (int i = 0; i + k + 1 < n; i++)
        {
            ans = min(ans, max(right_max[i + k + 1], left_max[i]) - min(left_min[i], right_min[i + k + 1]));
        }
        return ans;
    }
};

int main()
{
    return 0;
}