#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long getCount(int n)
    {
        // Your code goes here
        vector<vector<long long>> v(n, vector<long long>(12, 0));
        for (long long i = 1; i <= 11; i++)
        {
            if (i == 10)
                continue;
            v[n - 1][i] = 1;
        }
        for (long long i = n - 2; i >= 0; i--)
        {
            for (int j = 1; j <= 11; j++)
            {
                if (j == 10)
                    continue;
                v[i][j] = v[i + 1][j];
                if (j - 3 >= 1)
                {
                    v[i][j] += v[i + 1][j - 3];
                }
                if (j + 3 <= 11 && j != 10)
                {
                    v[i][j] += v[i + 1][j + 3];
                }
                if (j == 11)
                    continue;
                if ((j + 1) % 3 != 1)
                    v[i][j] += v[i + 1][j + 1];
                if ((j - 1) % 3 != 0)
                    v[i][j] += v[i + 1][j - 1];
            }
        }
        long long ans = 0;
        for (long long i = 1; i <= 11; i++)
        {
            if (i == 10)
                continue;
            ans += v[0][i];
        }
        return ans;
    }
};

int main()
{
    return 0;
}