#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubseq(int n, vector<int> &a)
    {
        // code here
        unordered_map<int, int> mp;
        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int first = (mp.count(a[i] - 1) == 0) ? 0 : mp[a[i] - 1];
            int second = (mp.count(a[i] + 1) == 0) ? 0 : mp[a[i] + 1];
            int third = (mp.count(a[i]) == 0) ? 0 : mp[a[i]];
            int cur;
            if (first > second)
            {
                cur = first + 1;
            }
            else
            {
                cur = second + 1;
            }
            if (cur > third)
                mp[a[i]] = cur;
            ans = max(ans, cur);
        }
        return ans;
    }
};

int main()
{
    return 0;
}