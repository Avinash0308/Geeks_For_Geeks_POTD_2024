#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // arr1,arr2 : the arrays
    //  n, m: size of arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        // Your code here
        // return vector with correct order of elements
        vector<int> v;
        int x = 0, y = 0;
        while (x < n && y < m)
        {
            if (arr1[x] <= arr2[y])
            {
                v.push_back(arr1[x]);
                while (x < n - 1 && arr1[x] == arr1[x + 1])
                    x++;
                if (arr1[x] == arr2[y])
                {
                    while (y < m - 1 && arr2[y] == arr2[y + 1])
                        y++;
                    y++;
                }
                x++;
            }
            else
            {
                v.push_back(arr2[y]);
                while (y < m - 1 && arr2[y] == arr2[y + 1])
                    y++;
                y++;
            }
        }
        while (x < n)
        {
            v.push_back(arr1[x]);
            while (x < n - 1 && arr1[x] == arr1[x + 1])
                x++;
            x++;
        }
        while (y < m)
        {
            v.push_back(arr2[y]);
            while (y < m - 1 && arr2[y] == arr2[y + 1])
                y++;
            y++;
        }
        return v;
    }
};

int main()
{
    return 0;
}