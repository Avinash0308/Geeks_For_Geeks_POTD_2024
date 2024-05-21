#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x)
    {
        vector<int> result;
        vector<int> closest;

        // Function to find the index where the array changes from values smaller to
        // values greater than x
        int l = findCrossOver(arr, 0, n - 1, x);

        int r = l + 1; // Set r as the next index
        int count = 0; // Counter for the number of closest values found

        if (arr[l] == x)
        { // If the value at l is equal to x, move l to the left
            l--;
        }

        // Compare the values at index l and r and select the closest value until k
        // closest values are found
        while (l >= 0 && r < n && count < k)
        {
            if (x - arr[l] < arr[r] - x)
            {
                closest.push_back(arr[l]);
                l--;
            }
            else
            {
                closest.push_back(arr[r]);
                r++;
            }
            count++;
        }

        // If k closest values are not found but there are still values to the left of l
        while (count < k && l >= 0)
        {
            closest.push_back(arr[l]);
            l--;
            count++;
        }

        // If k closest values are not found but there are still values to the right of
        // r
        while (count < k && r < n)
        {
            closest.push_back(arr[r]);
            r++;
            count++;
        }

        // Copy closest values to result vector
        for (int i = 0; i < k; i++)
        {
            result.push_back(closest[i]);
        }

        return result;
    }

private:
    // Function to find the index where array changes from values smaller to values
    // greater than x
    int findCrossOver(vector<int> &arr, int low, int high, int x)
    {
        if (arr[high] <= x)
        {
            return high;
        }
        if (arr[low] > x)
        {
            return low;
        }
        int mid = (low + high) / 2;
        if (arr[mid] <= x && arr[mid + 1] > x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            return findCrossOver(arr, mid + 1, high, x);
        }
        return findCrossOver(arr, low, mid - 1, x);
    }
};

int main()
{
    return 0;
}