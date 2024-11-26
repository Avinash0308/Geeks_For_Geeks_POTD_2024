#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr)
    {
        // your code here
        int maxy = INT_MIN;
        int cur = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            cur += arr[i];
            maxy = max(maxy, cur);
            if (cur < 0)
                cur = 0;
        }
        int miny = INT_MAX;
        cur = 0;
        for (int i = 0; i < n; i++)
        {
            cur += arr[i];
            miny = min(miny, cur);
            if (cur > 0)
                cur = 0;
        }
        int sum = accumulate(arr.begin(), arr.end(), 0);
        return max(sum - miny, maxy);
    }
};

int main()
{
    return 0;
}