#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int Maximize(vector<int> arr)
    {
        // Complete the function
        sort(arr.begin(), arr.end());
        long long int ans = 0, mod = 1e9 + 7;
        for (long long int i = 0; i < arr.size(); i++)
        {
            ans = (ans + i * arr[i]) % mod;
        }
        return ans;
    }
};

int main()
{
    return 0;
}