#include <bits/stdc++.h>
using namespace std;

class Solution
{
    vector<vector<int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
    string dire = "RDUL";

public:
    void solve(int i, int j, int n, vector<string> &ans, vector<vector<int>> &v, string &cur, vector<vector<int>> &mat)
    {
        if (i < 0 || i >= n || j < 0 || j >= n || mat[i][j] == 0 || v[i][j] == 1)
            return;
        if (i == n - 1 && j == n - 1)
        {
            ans.push_back(cur);
            return;
        }
        v[i][j] = 1;
        for (int ind = 0; ind < 4; ind++)
        {
            cur.push_back(dire[ind]);
            solve(i + dir[ind][0], j + dir[ind][1], n, ans, v, cur, mat);
            cur.pop_back();
        }
        v[i][j] = 0;
        return;
    }
    vector<string> findPath(vector<vector<int>> &mat)
    {
        // Your code goes here
        int n = mat.size();
        vector<string> ans;
        vector<vector<int>> v(n, vector<int>(n));
        string cur;
        solve(0, 0, n, ans, v, cur, mat);
        return ans;
    }
};

int main()
{
    return 0;
}