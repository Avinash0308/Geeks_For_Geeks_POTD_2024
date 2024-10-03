#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int> &nums)
    {
        // Your code goes here.
        int a = INT_MAX, b = INT_MAX, c = 0, d = 0;
        int req = nums.size() / 3;
        for (auto i : nums)
        {
            if (i == a)
                c++;
            else if (i == b)
                d++;
            else if (c == 0)
                a = i, c = 1;
            else if (d == 0)
                b = i, d = 1;
            else
                c--, d--;
        }
        vector<int> ans;
        c = 0, d = 0;
        for (auto i : nums)
        {
            if (i == a)
                c++;
            if (i == b)
                d++;
        }
        if (c > req)
            ans.push_back(a);
        if (d > req)
            ans.push_back(b);
        if (ans.empty())
            return {-1};
        return ans;
    }
};

int main()
{
    return 0;
}