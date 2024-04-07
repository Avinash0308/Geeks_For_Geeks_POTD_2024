#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int maxDotProduct(int n, int m, int a[], int b[])
    {
        // Your code goes here
        vector<vector<int>> ans(m, vector<int>(n));
        for (int i = 0; i < m; i++)
        {
            for (int j = i; j <= n - m + i; j++)
            {
                int val1 = 0, val3 = a[j] * b[i];
                if (j > 0)
                    val1 = ans[i][j - 1];
                if (i > 0 && j > 0)
                    val3 += ans[i - 1][j - 1];
                ans[i][j] = max(val1, val3);
            }
        }
        return ans[m - 1][n - 1];
    }
};

int main()
{
    return 0;
}