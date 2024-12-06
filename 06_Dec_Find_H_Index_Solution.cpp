#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find hIndex
    int hIndex(vector<int> &citations)
    {
        // code here
        vector<int> v(1e6 + 1);
        for (auto i : citations)
            v[i]++;
        int cnt = 0;
        for (int i = 1e6; i >= 0; i--)
        {
            cnt += v[i];
            if (cnt >= i)
                return i;
        }
    }
};

int main()
{
    return 0;
}