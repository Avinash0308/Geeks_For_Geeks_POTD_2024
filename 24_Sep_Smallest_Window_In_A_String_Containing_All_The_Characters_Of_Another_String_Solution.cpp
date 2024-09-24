#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the smallest window in the string s consisting
    // of all the characters of string p.
    bool elig(vector<int> &a, vector<int> &b)
    {
        for (int i = 0; i < 26; i++)
        {
            if (a[i] > b[i])
                return false;
        }
        return true;
    }
    string smallestWindow(string s, string p)
    {
        // Your code here
        int n = s.size();
        vector<int> v(26);
        vector<int> x(26);
        int ans = -1, len = INT_MAX;
        for (auto i : p)
        {
            v[i - 'a']++;
        }
        for (int i = 0, start = -1; i < n; i++)
        {
            x[s[i] - 'a']++;
            while (x[s[start + 1] - 'a'] > v[s[start + 1] - 'a'])
            {
                x[s[start + 1] - 'a']--;
                start++;
            }
            if (elig(v, x) && (i - start < len))
            {
                len = i - start;
                ans = start + 1;
            }
        }
        if (ans == -1)
            return "-1";
        else
            return s.substr(ans, len);
    }
};

int main()
{
    return 0;
}