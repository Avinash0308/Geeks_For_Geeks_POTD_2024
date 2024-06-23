#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long sumMatrix(long long n, long long q)
    {
        // code here
        if (2 * n < q)
            return 0;
        long long first, second;
        if (q > n)
        {
            second = n, first = q - n;
        }
        else
        {
            second = q - 1, first = 1;
        }
        return second - first + 1;
    }
};

int main()
{
    return 0;
}