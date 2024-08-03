#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int>> &mat)
    {
        // code here
        unordered_map<int, int> mp;
        int n = mat.size();
        if (n == 1)
            return 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j])
                {
                    mp[j]++;
                    mp[i]--;
                }
            }
        }
        for (auto i : mp)
        {
            if (i.second == n - 1)
                return i.first;
        }
        return -1;
    }
};

int main()
{
    return 0;
}