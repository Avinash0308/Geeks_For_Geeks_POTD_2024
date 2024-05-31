#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string oddEven(string s)
    {
        // code here
        vector<int> v(26);
        for (auto i : s)
        {
            v[i - 'a']++;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            if (((i % 2) != (v[i] % 2)) && v[i])
                ans++;
        }
        return (ans % 2) ? "ODD" : "EVEN";
    }
};

int main()
{
    return 0;
}