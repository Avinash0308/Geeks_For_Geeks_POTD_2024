#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long search(int val, vector<double> &v, int n)
    {
        double x = (double)val / log2(val);
        int i = 0, j = n - 1;
        while (i <= j)
        {
            int mid = (i + j) / 2;
            double y = v[mid];
            if (x < y)
            {
                j = mid - 1;
            }
            else
                i = mid + 1;
        }
        return n - i;
    }
    long long countPairs(vector<int> &arr, vector<int> &brr)
    {
        // Your Code goes here.
        int n = arr.size(), m = brr.size();
        vector<double> b(m);
        for (int i = 0; i < m; i++)
        {
            b[i] = (double)brr[i] / log2(brr[i]);
        }
        sort(b.begin(), b.end());
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += search(arr[i], b, m);
        }
        return ans;
    }
};

int main()
{
    return 0;
}