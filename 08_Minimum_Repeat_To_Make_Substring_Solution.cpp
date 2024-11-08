#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void power(string &s, int req)
    {
        if (req == 1)
            return;
        string cur = s;
        power(s, req / 2);
        s = s + s;
        if (req % 2)
            s += cur;
    }
    int minRepeats(string &s1, string &s2)
    {
        // code here
        int n = s1.size(), m = s2.size();
        int req = (m - 1 + n - 1) / n;
        power(s1, req + 1);
        int found = s1.find(s2);
        if (found == string::npos)
            return -1;
        int len = found + m;
        return (len + n - 1) / n;
    }
};

int main()
{
    return 0;
}