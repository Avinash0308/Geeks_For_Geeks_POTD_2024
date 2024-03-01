#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int peakElement(int arr[], int n)
    {
        // Your code here
        if (n == 1)
            return 0;
        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (mid == 0 && arr[mid] >= arr[1])
                return mid;
            if (mid == n - 1 && arr[mid] >= arr[n - 2])
                return mid;
            if (arr[mid] >= arr[mid - 1] && arr[mid] >= arr[mid + 1])
                return mid;
            if (arr[mid] < arr[mid - 1])
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};
int main()
{

    return 0;
}