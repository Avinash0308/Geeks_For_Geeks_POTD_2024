#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find two repeated elements.
    vector<int> twoRepeated(int arr[], int N)
    {
        // Your code here
        vector<int> x;
        vector<int> v(N + 1);
        for (int i = 0; i < N + 2; i++)
        {
            ++v[arr[i]];
            if (v[arr[i]] > 1)
            {
                x.push_back(arr[i]);
            }
        }
        return x;
    }
};

int main()
{
    return 0;
}