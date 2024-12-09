#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval)
    {
        // code here
        vector<vector<int>> ans;
        for (int i = 0; i < intervals.size(); i++)
        {
            if (intervals[i][0] > newInterval[1])
            {
                ans.push_back(newInterval);
                ans.push_back(intervals[i]);
                newInterval = {INT_MAX, INT_MAX};
            }
            else if (intervals[i][1] >= newInterval[0] && intervals[i][0] <= newInterval[1])
            {
                newInterval = {min(intervals[i][0], newInterval[0]), max(intervals[i][1], newInterval[1])};
            }
            else
            {
                ans.push_back(intervals[i]);
            }
        }
        if (newInterval[0] == INT_MAX)
            return ans;
        ans.push_back({newInterval});
        return ans;
    }
};
int main()
{
    return 0;
}