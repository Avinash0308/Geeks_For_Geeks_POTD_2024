#include <bits/stdc++.h>
using namespace std;
class Solution
{
    void multiply(vector<vector<long long>> &v, vector<vector<long long>> &x, long long m)
    {
        vector<vector<long long>> res(3, vector<long long>(3));
        for (long long i = 0; i < 3; i++)
        {
            for (long long j = 0; j < 3; j++)
            {
                long long val = 0;
                for (long long k = 0; k < 3; k++)
                {
                    val = ((val % m) + ((v[i][k] % m) * (x[k][j] % m)) % m) % m;
                }
                res[i][j] = val;
            }
        }
        v = res;
    }
    void power(vector<vector<long long>> &v, long long raised, long long m)
    {
        if (raised == 1)
            return;
        vector<vector<long long>> temp = v;
        power(v, raised / 2, m);
        multiply(v, v, m);
        if (raised % 2)
            multiply(v, temp, m);
        return;
    }

public:
    long long genFibNum(long long a, long long b, long long c, long long n, long long m)
    {
        // code here
        if (n <= 2)
            return 1 % m;
        vector<vector<long long>> mat{{a, b, c}, {1, 0, 0}, {0, 0, 1}};
        power(mat, n - 2, m);
        return (mat[0][0] + mat[0][1] + mat[0][2]) % m;
    }
};
int main()
{

    return 0;
}