#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        if (n == 1)
            return;
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] < arr[i + 1])
            {
                int ele = arr[i];
                int idx = i;
                int k = INT_MAX;
                for (int j = i + 1; j < n; j++)
                {
                    if (arr[j] < k and arr[j] > arr[i])
                    {
                        k = arr[j];
                        idx = j;
                    }
                }
                swap(arr[i], arr[idx]);
                sort(arr.begin() + i + 1, arr.end());

                return;
            }
        }
        sort(arr.begin(), arr.end());
    }
};

int main()
{
    return 0;
}