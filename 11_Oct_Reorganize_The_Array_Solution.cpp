#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> rearrange(const vector<int> &a)
    {
        // Code here
        vector<int> arr = a;
        int n = arr.size(), i = 0;
        while (i < n)
        {
            if (arr[i] == i || arr[i] == -1)
            {
                i++;
                continue;
            }
            if (arr[i] >= n)
            {
                arr[i] = -1;
                i++;
            }
            else
            {
                if (arr[arr[i]] == arr[i])
                {
                    arr[i] = -1;
                    continue;
                }
                else
                {
                    int val = arr[arr[i]];
                    arr[arr[i]] = arr[i];
                    arr[i] = val;
                }
            }
        }
        return arr;
    }
};

int main()
{
    return 0;
}