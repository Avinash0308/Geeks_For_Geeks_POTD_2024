#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> &mat)
    {
        // code here
        int n = mat.size(), m = mat[0].size();
        k %= m;
        if (!k)
            return mat;
        for (int i = 0; i < n; i++)
        {
            int j = 0;
            queue<int> q;
            while (j < k)
            {
                q.push(mat[i][j]);
                j++;
            }
            while (j < m)
            {
                mat[i][j - k] = mat[i][j];
                j++;
            }
            j = m - k;
            while (j < m)
            {
                mat[i][j] = q.front();
                q.pop();
                j++;
            }
        }
        return mat;
    }
};

int main()
{
    return 0;
}