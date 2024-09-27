#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int k, vector<int> &arr)
    {
        // your code here
        deque<int> q;
        vector<int> ans;
        for (int i = 0; i < arr.size(); i++)
        {
            while (!q.empty() && arr[q.back()] <= arr[i])
                q.pop_back();
            q.push_back(i);
            if (q.front() + k <= i)
                q.pop_front();
            if (i >= k - 1)
            {
                ans.push_back(arr[q.front()]);
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}