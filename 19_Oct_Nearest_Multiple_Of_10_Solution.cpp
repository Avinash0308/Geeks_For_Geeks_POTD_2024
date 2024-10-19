#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string roundToNearest(string str)
    {
        // Complete the function
        int n = str.size();
        if (str[n - 1] <= '5')
            str[n - 1] = '0';
        else
        {
            str[n - 1] = '0';
            int i = n - 2;
            for (i = n - 2; i >= 0; i--)
            {
                if (str[i] == '9')
                    str[i] = '0';
                else
                {
                    str[i] = char(str[i] - '0' + 49);
                    break;
                }
            }
            if (i == -1)
                str = '1' + str;
        }
        return str;
    }
};

int main()
{
    return 0;
}