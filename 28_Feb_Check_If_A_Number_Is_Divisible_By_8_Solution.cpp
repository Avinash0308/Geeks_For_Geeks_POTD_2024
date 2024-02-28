#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int DivisibleByEight(string s)
    {
        // code here
        int n = s.size();
        int num = 0;
        if (n >= 3)
            num = s[n - 3] - '0';
        if (n >= 2)
            num = num * 10 + s[n - 2] - '0';
        num = num * 10 + s[n - 1] - '0';
        if (num % 8)
            return -1;
        return 1;
    }
};
int main()
{

    return 0;
}