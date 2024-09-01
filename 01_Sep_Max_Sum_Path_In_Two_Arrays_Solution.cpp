#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxPathSum(vector<int> &arr1, vector<int> &arr2)
    {
        // Code here
        int a = 0;
        int c = 0, d = 0;
        int i = 0, j = 0;
        int n = arr1.size(), m = arr2.size();
        while (i < n && j < m)
        {
            if (arr1[i] == arr2[j])
            {
                a += max(c, d);
                a += arr1[i];
                i++, j++;
                c = 0, d = 0;
            }
            else if (arr1[i] < arr2[j])
            {
                c += arr1[i];
                i++;
            }
            else
            {
                d += arr2[j];
                j++;
            }
        }
        while (i < n)
        {
            c += arr1[i];
            i++;
        }
        while (j < m)
        {
            d += arr2[j];
            j++;
        }
        a += max(c, d);
        return a;
    }
};

int main()
{
    return 0;
}