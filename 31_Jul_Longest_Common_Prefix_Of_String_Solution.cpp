#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> arr)
    {
        // your code here
        string ans;
        int n = arr.size(), m = arr[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (arr[j].size() <= i || arr[j][i] != arr[j - 1][i])
                {
                    if (ans.empty())
                        return "-1";
                    else
                        return ans;
                }
            }
            ans.push_back(arr[0][i]);
        }
        if (ans.empty())
            return "-1";
        else
            return ans;
    }
};

int main()
{
    return 0;
}