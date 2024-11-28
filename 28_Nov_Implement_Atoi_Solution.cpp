#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int myAtoi(char *s)
    {
        // Your code here
        long long int val = 0, maxy = (1 << 31) - 1;
        int i = 0, neg = 0;
        while (s[i] != '\0' && s[i] == ' ')
            i++;
        if (s[i] == '\0')
            return 0;
        if (s[i] == '-')
        {
            neg = 1;
            i++;
        }
        else if (s[i] == '+')
            i++;
        while (s[i] != '\0' && s[i] - '0' >= 0 && s[i] - '0' <= 9)
        {
            val = val * 10 + s[i] - '0';
            i++;
            if (neg && val > maxy + 1)
                return -(maxy + 1);
            if (!neg && val > maxy)
                return maxy;
        }
        return (neg) ? -val : val;
    }
};

int main()
{
    return 0;
}