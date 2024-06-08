#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findExtra(int n, int arr1[], int arr2[])
    {
        // add code here.
        int a = 0, c = n - 1;
        while (a <= c)
        {
            int e = (a + c) / 2;
            if (arr1[e] == arr2[e])
            {
                a = e + 1;
            }
            else
            {
                c = e - 1;
            }
        }
        return a;
    }
};

int main()
{
    return 0;
}