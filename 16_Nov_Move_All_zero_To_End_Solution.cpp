#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void pushZerosToEnd(vector<int> &arr)
    {
        // code here
        int ind = 0, n = arr.size();
        for (int i = 0; i < n; i++)
        {
            int val = arr[i];
            arr[i] = 0;
            if (val)
                arr[ind++] = val;
        }
    }
};

int main()
{
    return 0;
}