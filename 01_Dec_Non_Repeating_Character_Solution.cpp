#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s)
    {
        // Your code here
        vector<int> v(26);
        for (auto i : s)
            v[i - 'a']++;
        for (auto i : s)
        {
            if (v[i - 'a'] == 1)
                return i;
        }
        return '$';
    }
};

int main()
{
    return 0;
}