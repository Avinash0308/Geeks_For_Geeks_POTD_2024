#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findSingle(int n, int arr[])
    {
        // code here
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans ^= arr[i];
        }
        return ans;
    }
};

int main()
{
    return 0;
}