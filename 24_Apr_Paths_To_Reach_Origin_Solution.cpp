#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int ways(int x, int y)
    {
        // code here.
        x++;
        y++;
        int mod = 1e9 + 7;
        vector<int> v(y, 1);
        vector<int> z(y);
        for (int i = x - 2; i >= 0; i--)
        {
            for (int j = y - 1; j >= 0; j--)
            {
                z[j] = (((j != y - 1) ? z[j + 1] : 0) + v[j]) % mod;
            }
            v = z;
        }
        return v[0];
    }
};

int main()
{
    return 0;
}