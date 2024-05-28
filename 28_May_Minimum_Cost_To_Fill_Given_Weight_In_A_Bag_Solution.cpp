#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumCost(int n, int w, vector<int> &cost)
    {
        // code here
        vector<int> v(w + 1);
        for (int i = 1; i <= w; i++)
        {
            int cur = INT_MAX;
            for (int j = 0; j < i && j < n; j++)
            {
                cur = min(cur, v[i - j - 1] + cost[j]);
            }
            v[i] = cur;
        }
        if (v[w] == INT_MAX)
            return -1;
        else
            return v[w];
    }
};

int main()
{
    return 0;
}