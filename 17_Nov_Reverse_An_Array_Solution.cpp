#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void reverseArray(vector<int> &arr)
    {
        // code here
        int i = 0, j = arr.size() - 1;
        while (i <= j)
        {
            swap(arr[i], arr[j]);
            i++, j--;
        }
    }
};

int main()
{
    return 0;
}