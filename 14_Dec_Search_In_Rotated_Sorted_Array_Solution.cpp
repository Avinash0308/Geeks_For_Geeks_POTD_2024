#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> &arr, int key)
    {
        // complete the function here
        int n = arr.size();
        int i = 0, j = n - 1;
        while (i <= j)
        {
            int m = (i + j) / 2;
            if (arr[m] == key)
                return m;
            if (arr[i] <= arr[m])
            {
                if (key < arr[m] && key >= arr[i])
                    j = m - 1;
                else
                    i = m + 1;
            }
            else
            {
                if (key >= arr[m] && key <= arr[j])
                    i = m + 1;
                else
                    j = m - 1;
            }
        }
        return -1;
    }
};

int main()
{
    return 0;
}