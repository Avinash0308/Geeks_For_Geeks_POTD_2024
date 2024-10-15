#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int> &arr, int tar)
    {
        // Your code here
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sum = 0, ans = 0;
        for (auto i : arr)
        {
            sum += i;
            if (mp.count(sum - tar) != 0)
                ans += mp[sum - tar];
            mp[sum]++;
        }
        return ans;
    }
};

int main()
{
    return 0;
}