#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void zigZag(int n, vector<int> &arr)
    {
        // code here
        for (int i = 1; i < n - 1; i += 2)
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
                continue;
            if (arr[i] > arr[i - 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
            else if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
            else
            {
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
                if (arr[i] < arr[i + 1])
                {
                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
        }
        if (n % 2 == 0 && arr[n - 1] < arr[n - 2])
        {
            int temp = arr[n - 1];
            arr[n - 1] = arr[n - 2];
            arr[n - 2] = temp;
        }
    }
};

int main()
{
    return 0;
}