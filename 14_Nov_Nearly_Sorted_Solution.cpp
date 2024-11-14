#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void nearlySorted(vector<int> &arr, int k)
    {
        // code
        int n = arr.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++)
        {
            pq.push(arr[i]);
            if (i >= k)
            {
                arr[i - k] = pq.top();
                pq.pop();
            }
        }
        while (!pq.empty())
        {
            arr[n - pq.size()] = pq.top();
            pq.pop();
        }
    }
};

int main()
{
    return 0;
}