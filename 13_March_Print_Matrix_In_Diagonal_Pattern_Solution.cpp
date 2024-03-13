#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> matrixDiagonally(vector<vector<int>> &mat)
    {
        // Your code here
        vector<int> ans;
        int n = mat.size();
        for (int i = 0; i < 2 * n - 1; i++)
        {
            int add_x, add_y, x, y;
            if (i % 2 == 0)
            {
                add_x = -1;
                add_y = 1;
                x = min(i, n - 1);
                y = max(i - n + 1, 0);
            }
            else
            {
                add_x = 1;
                add_y = -1;
                x = max(i - n + 1, 0);
                y = min(i, n - 1);
            }
            while (x >= 0 && x < n && y >= 0 && y < n)
            {
                ans.push_back(mat[x][y]);
                x += add_x;
                y += add_y;
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}