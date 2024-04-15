#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query, int q)
    {

        // make a hash-> where elements are represented by index; size = max element(b) + 1,
        // count no. of values(smaller or equal to) present i.e.

        // first count the frequency of each element in B, than find cumulative freq
        // index 0 = 0, as all elements in arrays are greater than 0

        // finding max element: O(n)
        int maxi;
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, b[i]);
        }

        vector<int> freqB(maxi + 1, 0);

        // fill freq of B O(n)
        for (int i = 0; i < n; i++)
        {
            freqB[b[i]]++;
        }

        // calculating cumulative frequency O(maxi)
        for (int i = 1; i <= maxi; i++)
        {
            freqB[i] += freqB[i - 1];
        }

        // result vector:
        vector<int> result;

        // O(q)
        for (int i = 0; i < q; i++)
        {
            int index = a[query[i]];

            // if the given element is greater than the maximum element in b, that simply means n (all the elements ) are smaller!
            if (index > maxi)
                result.push_back(n);

            else
                result.push_back(freqB[index]);
        }

        return result;
    }
};

int main()
{
    return 0;
}