#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int kthElement(int k, vector<int> &arr1, vector<int> &arr2)
    {
        // code here
        int n = arr1.size(), m = arr2.size();
        if (n > m)
            return kthElement(k, arr2, arr1);
        int low = max(0, k - m), high = min(k, n);
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int sec = k - mid;
            int a = INT_MIN, b = INT_MIN, c = INT_MAX, d = INT_MAX;
            if (mid < n)
                c = arr1[mid];
            if (sec < m)
                d = arr2[sec];
            if (mid - 1 >= 0)
                a = arr1[mid - 1];
            if (sec - 1 >= 0)
                b = arr2[sec - 1];
            if (a <= d && b <= c)
            {
                return max(a, b);
            }
            else if (a > d)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return arr2[high];
    }
};

int main()
{
    return 0;
}