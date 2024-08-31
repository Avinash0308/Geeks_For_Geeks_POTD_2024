#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> find3Numbers(vector<int> &arr)
    {
        // Code here
        int n = arr.size();
        vector<int> v(n);
        int miny = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            miny = min(arr[i], miny);
            v[i] = miny;
        }
        int maxy = INT_MIN;
        for (int i = n - 1; i >= 0; i--)
        {
            maxy = max(maxy, arr[i]);
            if (maxy > arr[i] && v[i] < arr[i])
                return {v[i], arr[i], maxy};
        }
        return {};
    }
};

int main()
{
    return 0;
}