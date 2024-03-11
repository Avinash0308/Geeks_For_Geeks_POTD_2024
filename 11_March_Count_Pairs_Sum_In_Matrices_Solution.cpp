#include <bits/stdc++.h>
using namespace std;

#define ll long long int
class Solution
{
public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
    {
        // Your code goes here
        int i = 0, j = n * n - 1;
        int ans = 0;
        while (j >= 0 && i < n * n)
        {
            int val = mat1[i / n][i % n] + mat2[j / n][j % n];
            if (val == x)
                ans++;
            if (val < x)
                i++;
            else
                j--;
        }
        return ans;
    }
};
int main()
{

    return 0;
}