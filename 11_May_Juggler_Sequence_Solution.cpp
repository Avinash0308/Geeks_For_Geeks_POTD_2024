#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<long long> jugglerSequence(long long n)
    {
        // code here
        vector<long long> v;
        v.push_back(n);
        while (n > 1)
        {
            if (n % 2)
            {
                n = n * pow(n, 0.5);
            }
            else
                n = pow(n, 0.5);
            v.push_back(n);
        }
        return v;
    }
};

int main()
{
    return 0;
}