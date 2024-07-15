#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string smallestNumber(int s, int d)
    {
        // code here
        if (d * 9 < s)
            return "-1";
        string ans;
        for (int i = 0; i < d; i++)
        {
            int val = max(0, s - ((d - i - 1) * 9));
            if (ans.empty() && val == 0)
            {
                ans.push_back('1');
                s -= 1;
            }
            else
            {
                ans += to_string(val);
                s -= val;
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}