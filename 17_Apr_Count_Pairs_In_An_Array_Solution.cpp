#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int ans = 0;

public:
    void sort(int arr[], int low, int mid, int high)
    {
        vector<int> cur;
        int i = low, j = mid + 1;
        while (i <= mid && j <= high)
        {
            if (arr[i] > arr[j])
            {
                ans += mid + 1 - i;
                cur.push_back(arr[j]);
                j++;
            }
            else
            {
                cur.push_back(arr[i]);
                i++;
            }
        }
        while (i <= mid)
        {
            cur.push_back(arr[i]);
            i++;
        }
        while (j <= high)
        {
            cur.push_back(arr[j]);
            j++;
        }
        int ind = low;
        for (auto val : cur)
        {
            arr[ind] = val;
            ind++;
        }
    }
    void merge_sort(int arr[], int low, int high)
    {
        if (low >= high)
            return;
        int mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        sort(arr, low, mid, high);
    }
    int countPairs(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i] *= i;
        }
        merge_sort(arr, 0, n - 1);
        return ans;
    }
};

int main()
{
    return 0;
}