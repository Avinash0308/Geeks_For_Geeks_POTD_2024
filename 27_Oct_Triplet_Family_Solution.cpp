#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool findTriplet(vector<int> &arr)
    {
        // Your code
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for (int i = n - 1; i >= 0; i--)
        {
            int j = 0, k = i - 1;
            while (j < k)
            {
                if (arr[j] + arr[k] == arr[i])
                    return true;
                if (arr[j] + arr[k] > arr[i])
                    k--;
                else
                    j++;
            }
        }
        return false;
    }
};

int main()
{
    return 0;
}