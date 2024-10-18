#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getSingle(vector<int> &arr)
    {
        // code here
        int ans = 0;
        for (auto i : arr)
        {
            ans ^= i;
        }
        return ans;
    }
};

int main()
{
    return 0;
}