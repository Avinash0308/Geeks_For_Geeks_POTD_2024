#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string printString(string s, char ch, int count)
    {
        // Your code goes here
        int ind = 0;
        while (ind < s.size() && count)
        {
            if (s[ind] == ch)
                count--;
            ind++;
        }
        return s.substr(ind, s.size());
    }
};

int main()
{
    return 0;
}