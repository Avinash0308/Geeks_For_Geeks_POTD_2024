#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getMinDiff(int k, vector<int> &arr)
    {
        // code here
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int ans = arr[n - 1] - arr[0];
        for (int i = 1; i < n; i++)
        {
            int mi = min(arr[0] + k, arr[i] - k);
            int ma = max(arr[n - 1] - k, arr[i - 1] + k);
            ans = min(ans, ma - mi);
        }
        return ans;
    }
};

int main()
{
    return 0;
}