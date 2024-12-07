#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to count inversions in the array.
    int merge(int low, int mid, int high, vector<int> &arr)
    {
        int i = low, j = mid + 1;
        int count = 0;
        vector<int> v;
        while (i <= mid && j <= high)
        {
            if (arr[i] <= arr[j])
            {
                count += j - mid - 1;
                v.push_back(arr[i]);
                i++;
            }
            else
            {
                v.push_back(arr[j]);
                j++;
            }
        }
        while (i <= mid)
        {
            count += high - mid;
            v.push_back(arr[i]);
            i++;
        }
        while (j <= high)
        {
            v.push_back(arr[j]);
            j++;
        }
        for (int i = low; i <= high; i++)
        {
            arr[i] = v[i - low];
        }
        return count;
    }
    int solve(int low, int high, vector<int> &arr)
    {
        if (low >= high)
            return 0;
        int mid = (low + high) / 2;
        return solve(low, mid, arr) + solve(mid + 1, high, arr) + merge(low, mid, high, arr);
    }
    int inversionCount(vector<int> &arr)
    {
        // Your Code Here
        int n = arr.size();
        return solve(0, n - 1, arr);
    }
};

int main()
{

    return 0;
}