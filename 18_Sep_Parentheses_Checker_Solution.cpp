#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> s;
        for (auto i : x)
        {
            if (i == '(' || i == '{' || i == '[')
                s.push(i);
            else
            {
                char c = (i == '}') ? '{' : (i == ']' ? '[' : '(');
                if (s.empty() || s.top() != c)
                    return false;
                s.pop();
            }
        }
        return s.empty();
    }
};

int main()
{
    return 0;
}