#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int firstElementKTime(int n, int k, int a[])
    {
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[a[i]]++;
            if (m[a[i]] == k)
                return a[i];
        }
        return -1;
    }
};