#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>> &matrix)
    {
        // Code here
        int x = 0, y = 0;
        int i = -1, j = -1;
        int a = 0, b = 1;
        while (x >= 0 && x < n && y >= 0 && y < m)
        {
            i = x, j = y;
            if (matrix[x][y] == 1)
            {
                matrix[x][y] = 0;
                if (a == 0 && b == 1)
                    a = 1, b = 0;
                else if (a == 1 && b == 0)
                    a = 0, b = -1;
                else if (a == 0 && b == -1)
                    a = -1, b = 0;
                else
                    a = 0, b = 1;
            }
            x += a;
            y += b;
        }
        return {i, j};
    }
};

int main()
{
    return 0;
}