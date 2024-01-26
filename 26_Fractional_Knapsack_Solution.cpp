#include <bits/stdc++.h>
using namespace std;
struct Item
{
    int value;
    int weight;
};

class Solution
{
public:
    static bool comp(pair<double, int> a, pair<double, int> b)
    {
        return a.first > b.first;
    }
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here

        vector<pair<double, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            double fraction = double(arr[i].value) / arr[i].weight;
            v[i] = {fraction, i};
        }
        sort(v.begin(), v.end(), comp);
        double ans = 0;
        for (int i = 0; i < n && W; i++)
        {
            int ind = v[i].second;
            double fraction = v[i].first;
            int weight = min(W, arr[ind].weight);
            ans += fraction * weight;
            W -= weight;
        }
        return ans;
    }
};