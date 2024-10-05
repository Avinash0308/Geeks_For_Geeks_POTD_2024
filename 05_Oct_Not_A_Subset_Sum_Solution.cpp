#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long findSmallest(vector<int> &arr)
    {
        // Your code goes here.
        long long ans = 0, cur = 1;
        for (auto i : arr)
        {
            if (i > cur)
                return cur;
            cur += i;
        }
        return cur;
    }
};

int main()
{
    return 0;
}