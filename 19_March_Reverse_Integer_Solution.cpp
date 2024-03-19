#include <bits/stdc++.h>
using namespace std;

int reverse(int A)
{
    long long int a = A;
    long long int b = 0;
    while (a)
    {
        b = b * 10 + a % 10;
        a /= 10;
    }
    if (b > INT_MAX || b < INT_MIN)
        return 0;
    return b;
}

int main()
{
    return 0;
}