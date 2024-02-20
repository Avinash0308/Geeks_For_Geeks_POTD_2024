#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int wordBreak(int m, string s, vector<string> &dictionary)
    {
        // code here
        int n = s.size();
        vector<int> pos(n + 1);
        unordered_map<string, int> mp;
        for (auto dict : dictionary)
        {
            mp[dict]++;
        }
        pos[0] = 1;
        for (int i = 0; i < n; i++)
        {
            if (!pos[i])
                continue;
            string str;
            for (int j = i; j < n; j++)
            {
                str.push_back(s[j]);
                if (mp.count(str) != 0)
                {
                    pos[j + 1] = 1;
                }
            }
        }
        return pos[n];
    }
};