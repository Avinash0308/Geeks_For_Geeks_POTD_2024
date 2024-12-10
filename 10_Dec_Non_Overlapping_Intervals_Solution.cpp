#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minRemoval(vector<vector<int>> &intervals)
    {
        // code here
        int n = intervals.size();
        for (int i = 0; i < n; i++)
        {
            swap(intervals[i][0], intervals[i][1]);
        }
        sort(intervals.begin(), intervals.end());
        int prev = -1, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (intervals[i][1] >= prev)
            {
                prev = intervals[i][0];
                cnt++;
            }
        }
        return n - cnt;
    }
};
int main()
{
    return 0;
}