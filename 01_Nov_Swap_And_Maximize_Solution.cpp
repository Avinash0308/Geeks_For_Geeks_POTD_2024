#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maxSum(vector<int> &arr)
    {
        // code here
        sort(arr.begin(), arr.end());
        long long ans = 0;
        int i = 0, j = arr.size() - 1;
        while (i < j)
        {
            ans += arr[j] - arr[i];
            i++;
            ans += arr[j] - arr[i];
            j--;
        }
        ans += arr[i] - arr[0];
        return ans;
    }
};

int main()
{
    return 0;
}