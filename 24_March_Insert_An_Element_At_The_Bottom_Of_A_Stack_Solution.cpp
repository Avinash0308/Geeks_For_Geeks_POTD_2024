#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    stack<int> insertAtBottom(stack<int> st, int x)
    {
        if (st.empty())
        {
            st.push(x);
        }
        else
        {
            int ele = st.top();
            st.pop();
            st = insertAtBottom(st, x);
            st.push(ele);
        }
        return st;
    }
};

int main()
{
    return 0;
}