#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int> &nums)
    {

        // code here
        long long int zero = 0, value = 1;
        for (auto i : nums)
        {
            if (i == 0)
            {
                zero++;
            }
            else
                value *= i;
        }
        vector<long long int> ans(nums.size(), 0);
        if (zero > 1)
            return ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                ans[i] = value;
            }
            else
            {
                if (!zero)
                    ans[i] = value / nums[i];
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}