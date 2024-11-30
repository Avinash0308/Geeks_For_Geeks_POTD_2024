#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string &s1, string &s2)
    {
        // Your code here
        if (s1.size() != s2.size())
            return false;
        vector<int> v(26);
        for (auto i : s1)
        {
            v[i - 'a']++;
        }
        for (auto i : s2)
        {
            v[i - 'a']--;
        }
        for (auto i : v)
        {
            if (i)
                return false;
        }
        return true;
    }
};

int main()
{
    return 0;
}