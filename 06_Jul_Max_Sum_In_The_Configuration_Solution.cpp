#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long max_sum(int a[], int n)
    {
        // Your code here
        long long sum = 0;
        long long cur = 0;
        for (long long i = 0; i < n; i++)
        {
            sum += (a[i] * i);
            cur += a[i];
        }
        long long ans = sum;
        long long last = n;
        int end = n - 1;
        while (end > 0)
        {
            long long th = sum + cur - (last * a[end]);
            ans = max(ans, th);
            sum = th;
            end--;
        }
        return ans;
    }
};

int main()
{
    return 0;
}