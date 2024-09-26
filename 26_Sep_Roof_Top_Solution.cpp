#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int> &arr)
    {
        // Your code here
        int ans = 0, cur = 0;
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] > arr[i - 1])
                cur++;
            else
                cur = 0;
            ans = max(ans, cur);
        }
        return ans;
    }
};

int main()
{
    return 0;
}