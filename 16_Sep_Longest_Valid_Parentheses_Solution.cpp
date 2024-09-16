#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxLength(string str)
    {
        // code here
        int n = str.size();
        vector<int> v(n, -1);
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == ')')
            {
                if (!s.empty())
                {
                    v[s.top()] = i;
                    s.pop();
                }
            }
            else
                s.push(i);
        }
        int ans = 0;
        int cur = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == -1)
                cur = 0;
            else
            {
                cur += (v[i] - i + 1);
                i = v[i];
            }
            ans = max(ans, cur);
        }
        return ans;
    }
};

int main()
{
    return 0;
}