#include <bits/stdc++.h>
using namespace std;
class find
{
public:
    vector<int> get_lps(string &pat)
    {
        int n = pat.size();
        vector<int> lps(n, 0);
        int len = 0, i = 1;
        while (i < n)
        {
            if (pat[i] == pat[len])
            {
                len++;
                lps[i] = len;
                i++;
            }
            else
            {
                if (len)
                    len = lps[len - 1];
                else
                    i++;
            }
        }
        return lps;
    }
    vector<int> search(string &pat, string &txt)
    {
        // code here
        vector<int> lps = get_lps(pat);
        vector<int> res;
        int len = 0, i = 0;
        int n = pat.size(), m = txt.size();
        while (i < m)
        {
            if (txt[i] == pat[len])
            {
                len++;
                i++;
                if (len == n)
                {
                    res.push_back(i - len);
                    len = lps[len - 1];
                }
            }
            else
            {
                if (len != 0)
                    len = lps[len - 1];
                else
                    i++;
            }
        }
        return res;
    }
};

int main()
{
    return 0;
}