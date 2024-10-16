#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkSorted(vector<int> &arr)
    {
        // code here.
        int cnt = 0;
        int n = arr.size();
        for (int i = 0; i < n;)
        {
            if (arr[i] == i + 1)
                i++;
            else
            {
                cnt++;
                swap(arr[i], arr[arr[i] - 1]);
            }
        }
        return cnt == 0 || cnt == 2;
    }
};

int main()
{
    return 0;
}