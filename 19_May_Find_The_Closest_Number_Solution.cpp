#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int get_ind(int arr[], int k, int n)
    {
        int low = 0, high = n - 1, mid;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (arr[mid] >= k)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }

public:
    int findClosest(int n, int k, int arr[])
    {
        // Complete the function
        int ind = get_ind(arr, k, n);
        if (ind > 1)
        {
            if (k - arr[ind - 1] < arr[ind] - k)
                return arr[ind - 1];
        }
        return arr[ind];
    }
};

int main()
{
    return 0;
}