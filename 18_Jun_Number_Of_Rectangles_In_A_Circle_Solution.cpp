#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int rectanglesInCircle(int r)
    {
        int count = 0;
        int limit = 2 * r;

        for (int a = 1; a <= limit; a++)
        {
            for (int b = 1; b <= limit; b++)
            {
                if (a * a + b * b <= 4 * r * r)
                    count++;
            }
        }
        return count;
    }
};

int main()
{
    return 0;
}