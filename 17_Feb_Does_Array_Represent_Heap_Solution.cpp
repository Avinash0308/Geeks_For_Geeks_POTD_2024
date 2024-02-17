#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isMaxHeap(int arr[], int n, int i = 1)
    {
        // Your code goes here
        if (i > n)
            return true;
        int left = (2 * i <= n) ? arr[2 * i - 1] : 0;
        int right = (2 * i + 1 <= n) ? arr[2 * i] : 0;
        if (arr[i - 1] < left || arr[i - 1] < right)
            return false;
        if (!(isMaxHeap(arr, n, i * 2)) || !(isMaxHeap(arr, n, i * 2 + 1)))
            return false;
        return true;
    }
};