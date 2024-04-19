#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    vector<int> findMissing(int a[], int b[], int n, int m)
    {
        // Your code goes here
        unordered_map<int, int> mp;
        for (int i = 0; i < m; i++)
        {
            mp[b[i]]++;
        }
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (mp.count(a[i]) == 0)
                ans.push_back(a[i]);
        }
        return ans;
    }
};

int main()
{
    return 0;
}