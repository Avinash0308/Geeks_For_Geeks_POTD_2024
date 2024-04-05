#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int min_operations(vector<int> &nums)
    {
        // Code here
        int n = nums.size();
        int ans = 1;
        vector<int> v(n);
        v[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[j] > nums[i] && nums[j] - nums[i] >= j - i)
                {
                    v[i] = max(v[i], v[j]);
                }
            }
            v[i]++;
            ans = max(ans, v[i]);
        }
        return n - ans;
    }
};

int main()
{
    return 0;
}