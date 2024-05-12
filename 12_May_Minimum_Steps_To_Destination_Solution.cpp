#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSteps(int d)
    {
        // code here
        int cur = 0;
        int step = 1;
        while (cur != d && !((cur > d) && ((cur - d) % 2 == 0)))
        {
            cur += step;
            step++;
        }
        return step - 1;
    }
};

int main()
{
    return 0;
}