#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long> &arr)
    {
        // Your code here
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for (auto i : arr)
        {
            pq.push(i);
        }
        long long ans = 0;
        while (pq.size() > 1)
        {
            long long x = pq.top();
            pq.pop();
            long long y = pq.top();
            pq.pop();
            ans += x + y;
            pq.push(x + y);
        }
        return ans;
    }
};

int main()
{
    return 0;
}