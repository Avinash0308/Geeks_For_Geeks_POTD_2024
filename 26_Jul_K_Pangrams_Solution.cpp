#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool kPangram(string str, int k)
    {
        // code here
        int n = str.size();
        if (n < 26)
            return false;
        int found = 0;
        int si = 0;
        vector<int> v(26);
        for (auto i : str)
        {
            if (i == ' ')
                continue;
            si++;
            v[i - 'a']++;
            if (v[i - 'a'] == 1)
                found++;
        }
        if (found + k >= 26 && si >= 26)
            return true;
        else
            return false;
    }
};

int main()
{
    return 0;
}