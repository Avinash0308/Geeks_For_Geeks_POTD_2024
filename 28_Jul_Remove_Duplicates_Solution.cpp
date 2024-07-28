#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeDups(string str)
    {
        // Your code goes here
        vector<int> v(26);
        string ans;
        for (auto i : str)
        {
            if (v[i - 'a'])
                continue;
            v[i - 'a'] = 1;
            ans.push_back(i);
        }
        return ans;
    }
};

int main()
{
    return 0;
}