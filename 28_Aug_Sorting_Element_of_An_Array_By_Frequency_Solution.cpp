#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    static bool comp(pair<int, int> a, pair<int, int> b)
    {
        if (a.first > b.first)
            return true;
        else if (a.first < b.first)
            return false;
        else
            return a.second < b.second;
    }
    vector<int> sortByFreq(vector<int> &arr)
    {
        // Your code here
        vector<pair<int, int>> v;
        unordered_map<int, int> mp;
        for (auto i : arr)
        {
            mp[i]++;
        }
        for (auto i : mp)
        {
            v.push_back({i.second, i.first});
        }
        sort(v.begin(), v.end(), comp);
        int ind = 0;
        for (auto i : v)
        {
            int val = i.first;
            while (val--)
                arr[ind++] = i.second;
        }
        return arr;
    }
};

int main()
{
    return 0;
}