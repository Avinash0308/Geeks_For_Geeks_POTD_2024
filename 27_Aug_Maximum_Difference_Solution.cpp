#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr)
    {
        // Your code here
        int n = arr.size();
        vector<int> v(n);
        stack<int> s;
        int ind = 0;
        for (auto i : arr)
        {
            while (!s.empty() && s.top() >= i)
                s.pop();
            if (!s.empty())
                v[ind] = s.top();
            s.push(i);
            ind++;
        }
        int ans = 0;
        while (!s.empty())
            s.pop();
        for (int i = n - 1; i >= 0; i--)
        {
            while (!s.empty() && s.top() >= arr[i])
                s.pop();
            if (s.empty())
                ans = max(ans, v[i]);
            else
                ans = max(ans, abs(v[i] - s.top()));
            s.push(arr[i]);
        }
        return ans;
    }
};

int main()
{
    return 0;
}