#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &a)
{
    // Your code goes here
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            swap(a[i][j], a[i][n - j - 1]);
        }
    }
}

int main()
{
    return 0;
}