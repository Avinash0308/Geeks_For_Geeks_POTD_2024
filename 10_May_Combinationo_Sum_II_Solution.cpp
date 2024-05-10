#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(int ind, int sum, int k, int n, vector<int> &cur, vector<vector<int>> &ans, vector<int> &arr)
    {
        if (sum == k)
            ans.push_back(cur);
        if (ind >= n || sum >= k)
            return;
        else
        {
            cur.push_back(arr[ind]);
            solve(ind + 1, sum + arr[ind], k, n, cur, ans, arr);
            cur.pop_back();
            while (ind < n - 1 && arr[ind] == arr[ind + 1])
                ind++;
            solve(ind + 1, sum, k, n, cur, ans, arr);
        }
    }
    vector<vector<int>> CombinationSum2(vector<int> arr, int n, int k)
    {
        // code here
        sort(arr.begin(), arr.end());
        vector<int> cur;
        vector<vector<int>> ans;
        solve(0, 0, k, n, cur, ans, arr);
        return ans;
    }
};

int main()
{
    return 0;
}