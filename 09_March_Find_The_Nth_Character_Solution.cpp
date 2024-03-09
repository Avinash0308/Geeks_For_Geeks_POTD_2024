#include <bits/stdc++.h>
using namespace std;

#define ll long long int
class Solution
{
public:
    char nthCharacter(string s, int r, int n)
    {
        // code here
        n++;
        long long int val = 1;
        val = pow(2, r);
        long long int ind = n / val;
        if (n % val == 0)
            ind--;
        int c = s[ind] - '0';
        long long int rem = (n % val == 0) ? (val) : (n % val);
        long long int low = 1, high = val;
        while (low <= high)
        {
            long long int mid = (low + high) / 2;
            if (mid < rem)
            {
                c = (c + 1) % 2;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        char ans = (c) ? '1' : '0';
        return ans;
    }
};
int main()
{

    return 0;
}