#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countMin(string str)
    {
        // complete the function here
        int n = str.size();
        vector<vector<int>> v(n, vector<int>(n));
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = i; j < n; j++)
            {
                if (i == j)
                {
                    v[i][j] = 0;
                    continue;
                }
                if (i + 1 == j)
                {
                    if (str[i] == str[j])
                        v[i][j] = 0;
                    else
                        v[i][j] = 1;
                }
                else
                {
                    v[i][j] = min({v[i + 1][j - 1] + 2 * (str[i] != str[j]), v[i][j - 1] + 1, v[i + 1][j] + 1});
                }
            }
        }
        return v[0][n - 1];
    }
};

int main()
{
    return 0;
}