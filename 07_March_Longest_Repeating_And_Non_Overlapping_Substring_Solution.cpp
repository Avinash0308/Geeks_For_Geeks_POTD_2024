#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string longestSubstring(string s, int n)
    {
        // code here
        int i = 0, j = 0, siz = 0;
        string ans = "-1";
        while (i < n && j < n)
        {
            string cur = s.substr(i, j - i + 1);
            if (s.find(cur, j + 1) != string::npos)
            {
                if (siz < j - i + 1)
                {
                    siz = j - i + 1;
                    ans = cur;
                }
                j++;
            }
            else
                i++;
        }
        return ans;
    }
};