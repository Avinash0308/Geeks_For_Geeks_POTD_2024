#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {

        // Your code here
        string bit;
        while (n)
        {
            if (n % 2)
                bit.push_back('1');
            else
                bit.push_back('0');
            n /= 2;
        }
        reverse(bit.begin(), bit.end());
        for (int i = 1; i < bit.size(); i++)
        {
            if (bit[i] != bit[i - 1])
            {
                bit[i] = '1';
            }
            else
            {
                bit[i] = '0';
            }
        }
        int ans = 0;
        int cur = 1;
        for (int i = bit.size() - 1; i >= 0; i--)
        {
            if (bit[i] == '1')
                ans += cur;
            cur *= 2;
        }
        return ans;
    }
};

int main()
{
    return 0;
}