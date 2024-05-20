#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long int PowMod(long long int x, long long int n, long long int M)
    {
        // Code here
        if (n == 1)
            return x;
        long long int value = PowMod(x, n / 2, M);
        value = (value * value) % M;
        if (n % 2)
            value = (value * x) % M;
        return value;
    }
};

int main()
{
    return 0;
}