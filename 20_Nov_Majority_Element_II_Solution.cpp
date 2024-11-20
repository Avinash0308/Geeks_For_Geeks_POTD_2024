#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int> &arr)
    {
        // Your code goes here.
        int a = 1e9 + 7, b = 1e9 + 7, c = 0, d = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            if (a == arr[i])
            {
                c++;
            }
            else if (b == arr[i])
            {
                d++;
            }
            else if (c == 0)
            {
                c = 1;
                a = arr[i];
            }
            else if (d == 0)
            {
                d = 1;
                b = arr[i];
            }
            else
            {
                c--, d--;
            }
        }
        vector<int> ans;
        c = 0, d = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == a)
                c++;
            else if (arr[i] == b)
                d++;
        }
        int req = (n / 3) + 1;
        if (c >= req)
            ans.push_back(a);
        if (d >= req)
            ans.push_back(b);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    return 0;
}