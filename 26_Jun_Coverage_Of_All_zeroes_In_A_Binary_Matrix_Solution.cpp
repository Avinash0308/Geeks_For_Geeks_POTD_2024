#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findCoverage(vector<vector<int>> &matrix)
    {
        // Code here
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> dir = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j])
                    continue;
                for (int k = 0; k < 4; k++)
                {
                    int x = i + dir[k][0], y = j + dir[k][1];
                    if (x >= 0 && x < n && y >= 0 && y < m && matrix[x][y] == 1)
                        ans++;
                }
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}