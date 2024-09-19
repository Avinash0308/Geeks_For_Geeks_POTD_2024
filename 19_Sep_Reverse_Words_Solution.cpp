#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to reverse words in a given string.
    string reverseWords(string str)
    {
        // code here
        vector<string> part;
        for (int i = 0; i < str.size(); i++)
        {
            string cur = "";
            while (i < str.size() && str[i] != '.')
            {
                cur += str[i];
                i++;
            }
            part.push_back(cur);
        }
        string ans;
        for (int i = part.size() - 1; i >= 0; i--)
        {
            ans += part[i] + ".";
        }
        ans.pop_back();
        return ans;
    }
};

int main()
{
    return 0;
}