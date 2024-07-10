#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSquare(int n, int m, vector<vector<int>> mat)
    {
        // code here'
        vector<int> prev(m + 1), cur(m + 1);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 0)
                {
                    cur[j + 1] = 0;
                }
                else
                {
                    cur[j + 1] = 1 + min({cur[j], prev[j + 1], prev[j]});
                    ans = max(ans, cur[j + 1]);
                }
            }
            prev = cur;
        }
        return ans;
    }
};

int main()
{
    return 0;
}