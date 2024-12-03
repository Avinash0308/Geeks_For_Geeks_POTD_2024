#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minChar(string &s)
    {
        // Write your code here
        int n = s.size();
        string temp = s;
        reverse(temp.begin(), temp.end());
        s = s + "#" + temp;
        vector<int> lps(n * 2 + 1);
        int len = 0;
        for (int i = 1; i < n * 2 + 1;)
        {
            if (s[i] == s[len])
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
        return n - lps.back();
    }
};

int main()
{
    return 0;
}