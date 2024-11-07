#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int> &arr)
    {
        // code here
        int val = accumulate(arr.begin(), arr.end(), 0);
        if (val % 3)
            return {-1, -1};
        int sum = val / 3;
        int n = arr.size();
        vector<int> ans;
        int cur = 0;
        for (int i = 0; i < n; i++)
        {
            cur += arr[i];
            if (cur > sum)
                return {-1, -1};
            if (cur == sum)
            {
                cur = 0;
                ans.push_back(i);
            }
        }
        ans.pop_back();
        return ans;
    }
};

int main()
{
    return 0;
}