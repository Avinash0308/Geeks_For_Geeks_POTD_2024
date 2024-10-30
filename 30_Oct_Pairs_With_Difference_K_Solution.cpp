#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int> &arr, int k)
    {
        // code here
        int ans = 0;
        unordered_map<int, int> mp;
        for (auto i : arr)
        {
            ans += mp[i - k];
            ans += mp[i + k];
            mp[i]++;
        }
        return ans;
    }
};

int main()
{
    return 0;
}