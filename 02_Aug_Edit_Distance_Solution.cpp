#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int solve(int i, int j, int n, int m, vector<vector<int>> &v, string &x, string &y)
    {
        if (i == n && j == m)
            return 0;
        if (i == n)
            return m - j;
        if (j == m)
            return n - i;
        if (v[i][j] != -1)
            return v[i][j];
        int z = min(solve(i + 1, j, n, m, v, x, y), solve(i, j + 1, n, m, v, x, y)) + 1;
        z = min(z, solve(i + 1, j + 1, n, m, v, x, y) + (x[i] != y[j]));
        return v[i][j] = z;
    }
    int editDistance(string str1, string str2)
    {
        // Code here
        int n = str1.size(), m = str2.size();
        vector<vector<int>> v(n, vector<int>(m, -1));
        return solve(0, 0, n, m, v, str1, str2);
    }
};

int main()
{
    return 0;
}