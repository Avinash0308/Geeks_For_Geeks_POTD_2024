#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string pattern(vector<vector<int>> &arr)
    {
        // Code Here
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            int low = 0, high = n - 1;
            while (low < high)
            {
                if (arr[i][low] == arr[i][high])
                {
                    low++;
                    high--;
                }
                else
                {
                    break;
                }
            }
            if (low >= high)
            {
                string ans = to_string(i);
                ans += " R";
                return ans;
            }
        }
        for (int i = 0; i < n; i++)
        {
            int low = 0, high = n - 1;
            while (low < high)
            {
                if (arr[low][i] == arr[high][i])
                {
                    low++;
                    high--;
                }
                else
                {
                    break;
                }
            }
            if (low >= high)
            {
                string ans = to_string(i);
                ans += " C";
                return ans;
            }
        }
        return "-1";
    }
};

int main()
{
    return 0;
}