#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, vector<int> &wt, vector<int> &val)
    {
        // Your code here
        int n = wt.size();
        vector<int> prev(W + 1);
        for (int i = 0; i < n; i++)
        {
            vector<int> cur(W + 1);
            for (int j = 1; j <= W; j++)
            {
                cur[j] = max(prev[j], cur[j - 1]);
                if (wt[i] <= j)
                    cur[j] = max(prev[j - wt[i]] + val[i], cur[j]);
            }
            prev = cur;
        }
        return prev[W];
    }
};

int main()
{
    return 0;
}