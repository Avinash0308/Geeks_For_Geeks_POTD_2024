#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int findSwapValues(int a[], int n, int b[], int m)
    {
        // Your code goes here
        int first = accumulate(a, a + n, 0);
        int second = accumulate(b, b + m, 0);
        if ((first - second) % 2)
            return -1;
        sort(a, a + n);
        sort(b, b + m);
        int diff = (first - second) / 2;
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            int val1 = a[i] - b[j];
            if (val1 == diff)
                return 1;
            else if (val1 > diff)
                j++;
            else
                i++;
        }
        return -1;
    }
};

int main()
{
    return 0;
}