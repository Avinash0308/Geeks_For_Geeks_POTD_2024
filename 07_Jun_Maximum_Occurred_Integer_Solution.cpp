#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // l and r are input array
    // maxx : maximum in r[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in l[] and r[]
    // Function to find the maximum occurred integer in all ranges.
    int maxOccured(int n, int l[], int r[], int maxx)
    {

        // Your code here
        int maxy = 0;
        for (int i = 0; i < n; i++)
        {
            maxy = max(maxy, r[i] + 1);
        }
        vector<int> v(maxy + 1);
        for (int i = 0; i < n; i++)
        {
            v[l[i]]++;
            v[r[i] + 1]--;
        }
        int val = -1, rep = 0;
        int cur = 0;
        for (int i = 1; i < maxy + 1; i++)
        {
            cur += v[i];
            if (cur > rep)
            {
                rep = cur;
                val = i;
            }
        }
        return val;
    }
};

int main()
{
    return 0;
}