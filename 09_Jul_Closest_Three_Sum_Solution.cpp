#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int threeSumClosest(vector<int> arr, int target)
    {
        // Your code goes here
        sort(arr.begin(), arr.end());
        int n = arr.size(), val = INT_MAX;
        for (int i = 0; i < n - 2; i++)
        {
            int j = i + 1, k = n - 1;
            while (j < k)
            {
                int sum = arr[i] + arr[j] + arr[k];
                if (abs(target - sum) <= abs(target - val))
                {
                    if (abs(target - sum) == abs(target - val))
                        val = max(val, sum);
                    else
                        val = sum;
                }
                if (sum <= target)
                    j++;
                else
                    k--;
            }
        }
        return val;
    }
};

int main()
{
    return 0;
}