#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(string str, unordered_map<string, int> &visit, vector<string> &cur, unordered_map<string, unordered_set<string>> &mp)
    {
        cur.push_back(str);
        visit[str] = 1;
        for (auto check : mp[str])
        {
            if (visit.count(check) == 0)
            {
                solve(check, visit, cur, mp);
            }
        }
    }
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts)
    {
        // code here
        unordered_map<string, unordered_set<string>> mp;
        unordered_map<string, string> rel;
        for (auto ac : accounts)
        {
            int n = ac.size();
            for (int i = 1; i < n; i++)
            {
                rel[ac[i]] = ac[0];
                for (int j = i + 1; j < n; j++)
                {
                    mp[ac[i]].insert(ac[j]);
                    mp[ac[j]].insert(ac[i]);
                }
            }
        }
        unordered_map<string, int> visit;
        vector<vector<string>> ans;
        for (auto ac : rel)
        {
            if (visit.count(ac.first) == 0)
            {
                vector<string> cur;
                solve(ac.first, visit, cur, mp);
                ans.push_back(cur);
            }
        }
        int x = ans.size();
        for (int i = 0; i < x; i++)
        {
            sort(ans[i].begin(), ans[i].end());
            string mail = ans[i][0];
            ans[i].insert(ans[i].begin(), rel[mail]);
        }
        return ans;
    }
};

int main()
{
    return 0;
}