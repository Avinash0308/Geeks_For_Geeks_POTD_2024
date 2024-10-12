#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pairWithMaxSum(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        if (n <= 1)
            return -1;
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            ans = max(ans, arr[i] + arr[i - 1]);
        }
        return ans;
    }
};

int main()
{
    return 0;
}