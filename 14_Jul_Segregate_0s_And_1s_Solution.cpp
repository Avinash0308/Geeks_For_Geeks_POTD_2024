#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void segregate0and1(vector<int> &arr)
    {
        // code here
        int x = 0, y = arr.size() - 1;
        while (x < y)
        {
            if (arr[x] == 1)
            {
                swap(arr[x], arr[y]);
                y--;
            }
            else
                x++;
        }
    }
};

int main()
{
    return 0;
}