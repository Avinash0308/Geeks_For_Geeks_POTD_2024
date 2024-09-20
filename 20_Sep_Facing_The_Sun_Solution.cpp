#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &height)
    {
        // code here
        stack<int> s;
        int ans = 0;
        for (auto i : height)
        {
            while (!s.empty() && i > s.top())
                s.pop();
            ans += s.empty();
            s.push(i);
        }
        return ans;
    }
};

int main()
{
    return 0;
}