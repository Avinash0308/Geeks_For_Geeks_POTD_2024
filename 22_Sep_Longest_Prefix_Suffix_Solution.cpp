#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lps(string str)
    {
        // Your code goes here
        int n = str.size();
        vector<int> v(n);
        int cur = 0, i = 1;
        while (i < n)
        {
            if (str[i] == str[cur])
            {
                cur++;
                v[i] = cur;
                i++;
            }
            else
            {
                if (cur)
                {
                    cur = v[cur - 1];
                }
                else
                {
                    i++;
                }
            }
        }
        return v[n - 1];
    }
};

int main()
{
    return 0;
}