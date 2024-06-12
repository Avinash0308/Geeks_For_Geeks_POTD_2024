#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countNumberswith4(int n)
    {
        // code here
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int val = i;
            while (val)
            {
                if (val % 10 == 4)
                {
                    ans++;
                    break;
                }
                val /= 10;
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}