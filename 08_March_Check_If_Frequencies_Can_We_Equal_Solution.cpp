#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool sameFreq(string s)
    {
        // code here
        vector<int> freq(26);
        for (auto c : s)
        {
            freq[c - 'a']++;
        }
        vector<int> ele(2, -1);
        vector<int> fre(2, 0);
        for (int i = 0; i < 26; i++)
        {
            if (freq[i])
            {
                if (freq[i] == ele[0])
                {
                    fre[0]++;
                }
                else if (freq[i] == ele[1])
                {
                    fre[1]++;
                }
                else if (ele[0] == -1)
                {
                    ele[0] = freq[i];
                    fre[0] = 1;
                }
                else if (ele[1] == -1)
                {
                    ele[1] = freq[i];
                    fre[1] = 1;
                }
                else
                {
                    return false;
                }
            }
        }
        if (ele[1] == -1)
            return true;
        if (ele[0] == 1 && fre[0] == 1 || ele[1] == 1 && fre[1] == 1)
            return true;
        if (ele[0] - ele[1] == 1 && fre[0] == 1)
            return true;
        if (ele[1] - ele[0] == 1 && fre[1] == 1)
            return true;
        return false;
    }
};