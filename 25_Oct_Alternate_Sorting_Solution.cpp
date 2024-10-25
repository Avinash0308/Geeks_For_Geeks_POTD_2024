#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    vector<int> alternateSort(vector<int> &arr)
    {
        // Your code goes here
        sort(arr.begin(), arr.end());
        vector<int> ans(arr.size());
        int i = 0, j = arr.size() - 1;
        int ind = 0;
        while (i <= j)
        {
            ans[ind] = arr[j];
            j--;
            ind++;
            if (i <= j)
            {
                ans[ind] = arr[i];
                i++;
                ind++;
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}