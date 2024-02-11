#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> recamanSequence(int n)
    {
        // code here
        vector<int> ans;
        ans.push_back(0);
        unordered_map<int, int> dp;
        dp[0] = 1;
        int last = 0;
        for (int i = 1; i < n; i++)
        {
            if (last - i < 0 || dp.count(last - i) != 0)
            {
                ans.push_back(last + i);
                dp[last + i] = 1;
                last += i;
            }
            else
            {
                ans.push_back(last - i);
                dp[last - i] = 1;
                last -= i;
            }
        }
        return ans;
    }
};