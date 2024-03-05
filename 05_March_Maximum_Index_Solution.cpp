#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n)
    {
        // Your code here
        vector<int> miny(n), maxy(n);
        int cur = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cur = min(cur, a[i]);
            miny[i] = cur;
        }
        cur = INT_MIN;
        for (int i = n - 1; i >= 0; i--)
        {
            cur = max(cur, a[i]);
            maxy[i] = cur;
        }
        int i = 0, j = 0, ans = 0;
        while (i < n && j < n)
        {
            if (miny[i] <= maxy[j])
            {
                ans = max(ans, j - i);
                j++;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
};