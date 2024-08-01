#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> spirallyTraverse(vector<vector<int>> &matrix)
    {
        // code here
        int n = matrix.size(), m = matrix[0].size();
        vector<int> ans;
        for (int i = 0; i < ((min(n, m)) + 1) / 2; i++)
        {
            for (int j = i; j < m - i; j++)
                ans.push_back(matrix[i][j]);
            for (int j = i + 1; j < n - i; j++)
                ans.push_back(matrix[j][m - i - 1]);
            for (int j = m - i - 2; j >= i && n - i - 1 > i; j--)
                ans.push_back(matrix[n - i - 1][j]);
            for (int j = n - i - 2; j > i && m - i - 1 > i; j--)
                ans.push_back(matrix[j][i]);
        }
        return ans;
    }
};

int main()
{
    return 0;
}