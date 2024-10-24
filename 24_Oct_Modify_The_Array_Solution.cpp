#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr)
    {
        // Complete the function
        int n = arr.size();
        int ind = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
                continue;
            if (i < n - 1 && arr[i] == arr[i + 1])
            {
                arr[i] *= 2;
                arr[i + 1] = 0;
                int cur = arr[i];
                arr[i] = 0;
                arr[ind] = cur;
                ind++;
                i++;
            }
            else
            {
                int cur = arr[i];
                arr[i] = 0;
                arr[ind] = cur;
                ind++;
            }
        }
        return arr;
    }
};

int main()
{
    return 0;
}