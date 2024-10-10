#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxDistance(vector<int> &arr)
    {
        // Code here
        unordered_map<int, int> mp;
        int ans = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (mp.count(arr[i]))
                ans = max(ans, i - mp[arr[i]]);
            else
                mp[arr[i]] = i;
        }
        return ans;
    }
};

int main()
{
    return 0;
}