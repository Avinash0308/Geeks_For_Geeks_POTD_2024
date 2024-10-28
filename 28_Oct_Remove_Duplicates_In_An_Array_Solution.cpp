#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> removeDuplicate(vector<int> &arr)
    {
        // code here
        unordered_map<int, int> mp;
        vector<int> ans;
        for (auto i : arr)
        {
            if (mp.count(i))
                continue;
            mp[i] = 1;
            ans.push_back(i);
        }
        return ans;
    }
};

int main()
{
    return 0;
}