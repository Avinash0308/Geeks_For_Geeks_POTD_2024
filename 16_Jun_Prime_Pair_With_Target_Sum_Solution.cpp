#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getPrimes(int n)
    {
        // code here
        vector<int> v(n + 1);
        for (int i = 2; i * i <= n; i++)
        {
            if (v[i])
                continue;
            for (int j = i; j * i <= n; j++)
            {
                v[j * i] = 1;
            }
        }
        int low = 2, high = n - 2;
        while (low <= high)
        {
            if (v[low])
                low++;
            else if (v[high])
                high--;
            else if (low + high == n)
                return {low, high};
            else if (low + high > n)
                high--;
            else
                low++;
        }
        return {-1, -1};
    }
};

int main()
{
    return 0;
}