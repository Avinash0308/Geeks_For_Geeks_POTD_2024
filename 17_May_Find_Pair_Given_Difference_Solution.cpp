#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPair(int n, int x, vector<int> &arr)
    {
        // code here
        sort(arr.begin(), arr.end());
        int start = 0, cur = 1;
        while (cur < n)
        {
            if (start == cur)
            {
                cur++;
                continue;
            }
            if (arr[cur] - arr[start] == x)
                return 1;
            else if (arr[cur] - arr[start] > x)
                start++;
            else
                cur++;
        }
        return -1;
    }
};

int main()
{
    return 0;
}