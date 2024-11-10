#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b)
    {
        // Your code here
        // return vector with correct order of elements
        vector<int> ans;
        int i = 0, j = 0, n = a.size(), m = b.size();
        while (i < n && j < m)
        {
            if (a[i] < b[j])
            {
                ans.push_back(a[i]);
                i++;
            }
            else if (a[i] == b[j])
            {
                ans.push_back(a[i]);
                i++, j++;
            }
            else
            {
                ans.push_back(b[j]);
                j++;
            }
        }
        while (i < n)
        {
            ans.push_back(a[i]);
            i++;
        }
        while (j < m)
        {
            ans.push_back(b[j]);
            j++;
        }
        return ans;
    }
};

int main()
{
    return 0;
}