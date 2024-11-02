#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkDuplicatesWithinK(vector<int> &arr, int k)
    {
        // your code
        unordered_map<int, int> mp;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]])
                return true;
            mp[arr[i]]++;
            if (i >= k)
                mp[arr[i - k]]--;
        }
        return false;
    }
};

int main()
{
    return 0;
}