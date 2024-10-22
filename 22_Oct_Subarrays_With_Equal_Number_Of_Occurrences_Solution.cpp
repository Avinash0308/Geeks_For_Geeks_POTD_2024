#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sameOccurrence(vector<int> &arr, int x, int y)
    {
        // code here
        int n = arr.size();
        unordered_map<int, int> mp;
        mp[0] = 1;
        int cnt_x = 0, cnt_y = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
                cnt_x++;
            if (arr[i] == y)
                cnt_y++;
            if (mp.count(cnt_x - cnt_y) != 0)
                ans += mp[cnt_x - cnt_y];
            else
                mp[cnt_x - cnt_y] = 1;
        }
        return ans;
    }
};

int main()
{
    return 0;
}