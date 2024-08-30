#include <bits/stdc++.h>
using namespace std;

class Solution
{
    void convertToString(vector<vector<char>> &a, vector<vector<int>> &ans, int n)
    {
        // storing col
        vector<int> temp;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == 'Q')
                    temp.push_back(j + 1);
            }
        }

        ans.push_back(temp);
    }
    bool isSafe(int row, int col, int n, vector<vector<char>> &a)
    {

        // same col
        for (int i = 0; i < row; i++)
        {
            if (a[i][col] == 'Q')
                return false;
        }

        // top left
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        {
            if (a[i][j] == 'Q')
                return false;
        }

        // top right
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
        {
            if (a[i][j] == 'Q')
                return false;
        }

        return true;
    }
    void solve(int i, int n, vector<vector<char>> &a, vector<vector<int>> &ans)
    {
        if (i == n)
        {
            convertToString(a, ans, n);
            return;
        }

        for (int j = 0; j < n; j++)
        {
            if (isSafe(i, j, n, a))
            {
                a[i][j] = 'Q';
                solve(i + 1, n, a, ans);
                a[i][j] = '.';
            }
        }
    }

public:
    vector<vector<int>> nQueen(int n)
    {
        vector<vector<char>> a(n, vector<char>(n, '.'));
        vector<vector<int>> ans;
        solve(0, n, a, ans);
        return ans;
    }
};

int main()
{
    return 0;
}