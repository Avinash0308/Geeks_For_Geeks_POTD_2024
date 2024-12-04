#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string &s1, string &s2)
    {
        // Your code here
        if (s1.size() != s2.size())
        {
            return false;
        }
        s2 += s2;
        int n = s1.size();
        vector<int> v(n);
        int len = 0, i = 1;
        while (i < n)
        {
            if (s1[i] == s1[len])
            {
                len++;
                v[i] = len;
                i++;
            }
            else
            {
                if (len)
                    len = v[len - 1];
                else
                    i++;
            }
        }
        i = 0;
        int j = 0;
        while (i < 2 * n && j < n)
        {
            if (s1[j] == s2[i])
            {
                i++, j++;
            }
            else
            {
                if (j)
                    j = v[j - 1];
                else
                    i++;
            }
        }
        return j == n;
    }
};

int main()
{
    return 0;
}