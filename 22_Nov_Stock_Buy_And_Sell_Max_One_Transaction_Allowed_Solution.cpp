#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumProfit(vector<int> &prices)
    {
        // code here
        int ans = 0, miny = INT_MAX;
        for (auto i : prices)
        {
            miny = min(miny, i);
            ans = max(ans, i - miny);
        }
        return ans;
    }
};

int main()
{
    return 0;
}