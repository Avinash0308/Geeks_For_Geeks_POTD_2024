#include <bits/stdc++.h>
using namespace std;
class Solution
{
    void solve(string &cur, string &s, int ind, vector<string> &str)
    {
        if (ind >= s.size())
        {
            if (cur.length())
                str.push_back(cur);
            return;
        }
        solve(cur, s, ind + 1, str);
        cur.push_back(s[ind]);
        solve(cur, s, ind + 1, str);
        cur.pop_back();
    }

public:
    vector<string> AllPossibleStrings(string s)
    {
        string cur;
        vector<string> ans;
        solve(cur, s, 0, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};