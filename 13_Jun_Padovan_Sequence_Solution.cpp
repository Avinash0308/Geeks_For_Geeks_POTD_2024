#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int padovanSequence(int n)
    {
        // code here
        if (n < 3)
            return 1;
        long long int a = 1, b = 1, c = 1, mod = 1e9 + 7;
        for (int i = 3; i <= n; i++)
        {
            a = (a + b) % mod;
            swap(a, b);
            swap(b, c);
        }
        return c;
    }
};

int main()
{
    return 0;
}