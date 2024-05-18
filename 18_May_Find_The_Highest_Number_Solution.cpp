#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &a)
    {
        // Code here.
        int n = a.size();
        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if ((mid == 0 || a[mid - 1] < a[mid]) && (mid == n - 1 || a[mid] > a[mid + 1]))
                return a[mid];
            else if (mid == 0 || a[mid - 1] < a[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }
        return 0;
    }
};

int main()
{
    return 0;
}