#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int rowWithMax1s(vector<vector<int>> &arr)
    {
        // code here
        int cur = -1, val = 0, n = arr.size(), m = arr[0].size();
        for (int i = 0; i < n; i++)
        {
            int ind = m - (lower_bound(arr[i].begin(), arr[i].end(), 1) - arr[i].begin());
            if (ind > val)
            {
                val = ind;
                cur = i;
            }
        }
        return cur;
    }
};

int main()
{
    return 0;
}