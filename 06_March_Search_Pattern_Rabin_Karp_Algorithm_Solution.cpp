#include <bits/stdc++.h>
using namespace std;

#define int long long int
class Solution
{
public:
    vector<int> search(string pattern, string text)
    {
        // code here.
        vector<int> ans;
        int d = 256, q = INT_MAX;
        int m = pattern.length(), n = text.length();
        int p = 0, t = 0, h = 1;
        for (int i = 0; i < m - 1; i++)
        {
            h = (h * d) % q;
        }
        for (int i = 0; i < m; i++)
        {
            p = (d * p + pattern[i]) % q;
            t = (d * t + text[i]) % q;
        }
        for (int i = 0; i <= n - m; i++)
        {
            if (p == t)
            {
                int j;
                for (j = 0; j < m; j++)
                {
                    if (text[i + j] != pattern[j])
                    {
                        break;
                    }
                }
                if (j == m)
                {
                    ans.push_back(i + 1);
                }
            }
            if (i < n - m)
            {
                t = (d * (t - text[i] * h) + text[i + m]) % q;
                if (t < 0)
                {
                    t = (t + q);
                }
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}