#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int swapNibbles(int n)
    {
        // code here
        int ans = 0;
        for (int i = 0; i < 4; i++)
        {
            if (n & (1 << i))
            {
                ans += (1 << (i + 4));
            }
            if (n & (1 << (i + 4)))
            {
                ans += (1 << i);
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}