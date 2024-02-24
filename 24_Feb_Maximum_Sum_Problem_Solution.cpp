#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSum(int n)
    {
        // code here.
        vector<int> v(n + 1);
        v[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            v[i] = max(i, v[i / 2] + v[i / 3] + v[i / 4]);
        }
        return v[n];
    }
};