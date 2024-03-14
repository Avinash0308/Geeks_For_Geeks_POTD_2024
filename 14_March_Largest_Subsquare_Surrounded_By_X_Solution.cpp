#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestSubsquare(int n, vector<vector<char>> a)
    {
        // code here
        vector<vector<pair<int, int>>> v(n, vector<pair<int, int>>(n, {0, 0}));
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == 'O')
                    continue;
                if (a[i][j] == 'X')
                    v[i][j] = {1, 1};
                if (i > 0)
                    v[i][j].first += v[i - 1][j].first;
                if (j > 0)
                    v[i][j].second += v[i][j - 1].second;
                int cur = min(v[i][j].first, v[i][j].second);
                while (cur > ans)
                {
                    if (v[i][j - cur + 1].first >= cur && v[i - cur + 1][j].second >= cur)
                        ans = cur;
                    cur--;
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