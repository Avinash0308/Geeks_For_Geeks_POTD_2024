#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(string str1, string str2)
    {
        // Your code goes here
        int n = str1.size(), m = str2.size();
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (str1[i] == str2[j])
                {
                    v[i][j] = 1;
                    if (i > 0 && j > 0)
                        v[i][j] += v[i - 1][j - 1];
                }
                else
                {
                    v[i][j] = 0;
                    if (i > 0)
                        v[i][j] = v[i - 1][j];
                    if (j > 0)
                        v[i][j] = max(v[i][j], v[i][j - 1]);
                }
            }
        }
        return n - v[n - 1][m - 1] + m - v[n - 1][m - 1];
    }
};

int main()
{
    return 0;
}