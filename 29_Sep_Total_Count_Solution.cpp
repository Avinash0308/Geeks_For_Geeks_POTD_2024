#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int totalCount(int k, vector<int> &arr)
    {
        // code here
        int ans = 0;
        for (auto i : arr)
        {
            ans += (i / k) + (i % k != 0);
        }
        return ans;
    }
};

int main()
{
    return 0;
}