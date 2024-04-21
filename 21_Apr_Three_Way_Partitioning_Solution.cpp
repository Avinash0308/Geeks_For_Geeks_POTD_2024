#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to partition the array around the range such
    // that array is divided into three parts.
    void threeWayPartition(vector<int> &array, int a, int b)
    {
        // code here
        int low = 0, mid = 0, high = array.size() - 1;
        while (mid <= high)
        {
            if (array[mid] < a)
            {
                swap(array[low], array[mid]);
                low++;
                mid++;
            }
            else if (array[mid] > b)
            {
                swap(array[high], array[mid]);
                high--;
            }
            else
            {
                mid++;
            }
        }
    }
};

int main()
{
    return 0;
}