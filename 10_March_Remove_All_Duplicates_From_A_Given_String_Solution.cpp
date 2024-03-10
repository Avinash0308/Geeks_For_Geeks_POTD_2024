#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeDuplicates(string str)
    {
        // code here
        string ans;
        unordered_map<char, int> mp;
        for (auto c : str)
        {
            if (mp.count(c) == 0)
            {
                mp[c] = 1;
                ans.push_back(c);
            }
        }
        return ans;
    }
};