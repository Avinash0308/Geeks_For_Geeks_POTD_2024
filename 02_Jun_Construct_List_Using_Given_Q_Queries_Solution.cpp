#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> constructList(int q, vector<vector<int>> &queries)
    {
        // code here
        vector<int> ans;
        int x = 0;
        for (int i = q - 1; i >= 0; i--)
        {
            if (queries[i][0])
                x ^= queries[i][1];
            else
                ans.push_back(x ^ queries[i][1]);
        }
        ans.push_back(x);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    return 0;
}