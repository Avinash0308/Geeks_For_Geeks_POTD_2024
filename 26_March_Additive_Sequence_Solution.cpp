#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string sum_it(string a, string b)
    {
        string ans;
        int n = a.size(), m = b.size();
        n--;
        m--;
        int rem = 0;
        while (n >= 0 && m >= 0)
        {
            rem = a[n] - '0' + b[m] - '0' + rem;
            int val = rem % 10;
            ans.push_back(char(val + 48));
            rem /= 10;
            n--;
            m--;
        }
        while (n >= 0)
        {
            rem = a[n] - '0' + rem;
            int val = rem % 10;
            ans.push_back(char(val + 48));
            rem /= 10;
            n--;
        }
        while (m >= 0)
        {
            rem = b[m] - '0' + rem;
            int val = rem % 10;
            ans.push_back(char(val + 48));
            rem /= 10;
            m--;
        }
        while (rem)
        {
            int val = rem % 10;
            ans.push_back(char(val + 48));
            rem /= 10;
        }
        while (ans.size() > 1 && ans.back() == '0')
            ans.pop_back();
        reverse(ans.begin(), ans.end());
        return ans;
    }
    bool solve(string first, string second, string &s, int ind)
    {
        if (ind == s.size())
            return true;
        string cur;
        string sum = sum_it(first, second);
        int n = s.size();
        while (ind < n)
        {
            cur.push_back(s[ind]);
            if (cur == sum)
                return solve(second, cur, s, ind + 1);
            ind++;
        }
        return false;
    }
    bool isAdditiveSequence(string s)
    {
        // Your code here
        int n = s.size();
        string first;
        for (int i = 0; i < n - 2; i++)
        {
            first.push_back(s[i]);
            string second;
            for (int j = i + 1; j < n - 1; j++)
            {
                second.push_back(s[j]);
                if (solve(first, second, s, j + 1))
                    return true;
            }
        }
        return false;
    }
};

int main()
{
    return 0;
}