#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minRow(int n, int m, vector<vector<int>> a)
    {
        // code here
        int ans = -1;
        int val = m + 1;
        for (int i = 0; i < n; i++)
        {
            int cur = 0;
            for (int j = 0; j < m; j++)
            {
                if (a[i][j])
                    cur++;
            }
            if (cur < val)
            {
                val = cur;
                ans = i + 1;
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}