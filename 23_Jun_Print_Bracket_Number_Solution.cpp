#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> bracketNumbers(string str)
    {
        // Your code goes here
        stack<int> s;
        int count = 0;
        vector<int> ans;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(')
            {
                count++;
                ans.push_back(count);
                s.push(count);
            }
            else if (str[i] == ')')
            {
                ans.push_back(s.top());
                s.pop();
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}