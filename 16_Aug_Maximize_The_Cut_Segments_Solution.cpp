#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        vector<int> v(n + 1);
        vector<int> num = {x, y, z};
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (num[j] <= i && (num[j] == i || v[i - num[j]] != 0))
                {
                    v[i] = max(v[i], v[i - num[j]] + 1);
                }
            }
        }
        return v[n];
    }
};

int main()
{
    return 0;
}