#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool possible(double mid, vector<int> &stations, int k)
    {
        int n = stations.size();
        for (int i = 1; i < n; i++)
        {
            int diff = (stations[i] - stations[i - 1]) / mid;
            k -= diff;
        }
        return k >= 0;
    }
    double findSmallestMaxDist(vector<int> &stations, int k)
    {
        // Code here
        double max_gap = 0;
        int n = stations.size();
        for (int i = 1; i < n; i++)
        {
            double val = (stations[i] - stations[i - 1]);
            max_gap = max(max_gap, val);
        }
        double low = 0, high = max_gap;
        while (high - low > 1e-6)
        {
            double mid = (low + high) / 2;
            if (possible(mid, stations, k))
                high = mid;
            else
                low = mid;
        }
        return high;
    }
};

int main()
{
    return 0;
}