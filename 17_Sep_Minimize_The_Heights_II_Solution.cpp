#include <bits/stdc++.h>
using namespace std;

// User function template for C++

class Solution
{
public:
    int getMinDiff(vector<int> &arr, int k)
    {
        // code here
        if (arr.size() == 1)
            return 0;
        vector<pair<int, int>> v;
        for (int i = 0; i < arr.size(); i++)
        {
            v.push_back({arr[i] + k, i});
            if (arr[i] >= k)
                v.push_back({arr[i] - k, i});
        }
        sort(v.begin(), v.end());
        unordered_map<int, int> mp;
        int n = v.size();
        int cur = 0, ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            mp[v[i].second]++;
            while (mp[v[cur].second] > 1)
            {
                mp[v[cur].second]--;
                cur++;
            }
            if (mp.size() == arr.size())
                ans = min(ans, v[i].first - v[cur].first);
        }
        return ans;
    }
};

int main()
{
    return 0;
}