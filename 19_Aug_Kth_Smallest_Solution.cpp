#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int partition(vector<int> &arr, int low, int high)
    {
        int i = low + 1, j = high, ind = low;
        int pivot = arr[low];
        do
        {
            while (i <= high && arr[i] <= pivot)
                i++;
            while (j >= low && arr[j] > pivot)
                j--;
            if (i < j)
            {
                swap(arr[i], arr[j]);
            }
        } while (i < j);
        swap(arr[low], arr[j]);
        return j;
    }
    int solve(vector<int> &arr, int low, int high, int k)
    {
        if (low < high)
        {
            int part = partition(arr, low, high);
            if (part == k - 1)
                return arr[k - 1];
            else if (part > k - 1)
                return solve(arr, low, part - 1, k);
            else
                return solve(arr, part + 1, high, k);
        }
        else
            return arr[k - 1];
    }
    int kthSmallest(vector<int> &arr, int k)
    {
        // code here
        return solve(arr, 0, arr.size() - 1, k);
    }
};

int main()
{
    return 0;
}