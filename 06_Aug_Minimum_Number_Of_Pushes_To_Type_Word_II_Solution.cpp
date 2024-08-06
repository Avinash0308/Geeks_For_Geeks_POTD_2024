#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumPushes(string word)
    {
        vector<int> v(26);
        for (auto i : word)
        {
            v[i - 'a']++;
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 25; i >= 0; i--)
        {
            if (i >= 18)
                ans += v[i];
            else if (i >= 10)
                ans += 2 * v[i];
            else if (i >= 2)
                ans += 3 * v[i];
            else
                ans += 4 * v[i];
        }
        return ans;
    }
};

int main()
{
    return 0;
}