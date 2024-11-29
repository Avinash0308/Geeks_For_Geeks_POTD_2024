#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string addBinary(string &s1, string &s2)
    {
        // your code here
        string res = "";
        int n = s1.size(), m = s2.size();
        int i = n - 1, j = m - 1;
        int prev = 0;
        while (i >= 0 && j >= 0)
        {
            prev += s1[i] - '0' + s2[j] - '0';
            res += to_string(prev % 2);
            prev /= 2;
            i--, j--;
        }
        while (i >= 0)
        {
            prev += s1[i] - '0';
            res += to_string(prev % 2);
            prev /= 2;
            i--;
        }
        while (j >= 0)
        {
            prev += s2[j] - '0';
            res += to_string(prev % 2);
            prev /= 2;
            j--;
        }
        if (prev)
            res += "1";
        while (res.size() > 1 && res.back() == '0')
            res.pop_back();
        reverse(res.begin(), res.end());
        return res;
    }
};

int main()
{
    return 0;
}