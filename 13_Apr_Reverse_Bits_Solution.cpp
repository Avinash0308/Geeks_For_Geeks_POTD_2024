#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long reversedBits(long long x)
    {
        // code here
        long long ans = 0;
        long long val = 1L << 31;
        long long val2 = 1;
        while (val > val2)
        {
            if ((val & x))
                ans += val2;
            if ((val2 & x))
                ans += val;
            val2 <<= 1;
            val >>= 1;
        }
        return ans;
    }
};

int main()
{
    return 0;
}