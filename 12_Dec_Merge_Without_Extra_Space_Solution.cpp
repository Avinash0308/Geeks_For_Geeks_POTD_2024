#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void mergeArrays(vector<int> &arr1, vector<int> &arr2)
    {
        // code here
        int n = arr1.size(), m = arr2.size();
        int i = 0, j = 0, k = n - 1;
        if (arr1[k] <= arr2[0])
            return;
        while (i <= k && j < m)
        {
            if (arr1[i] > arr2[j])
            {
                swap(arr1[k], arr2[j]);
                j++;
                k--;
            }
            else
            {
                i++;
            }
        }
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        return;
    }
};
int main()
{
    return 0;
}