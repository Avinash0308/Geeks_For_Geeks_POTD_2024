#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long int floorSqrt(long long int n)
    {
        // Your code goes here
        long long int start = 1, end = n;
        while (start <= end)
        {
            long long int mid = (start + end) / 2;
            if (mid * mid > n)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return end;
    }
};

int main()
{
    return 0;
}