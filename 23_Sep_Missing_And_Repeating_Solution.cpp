#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findTwoElement(vector<int> &arr)
    {
        // code here
        long long a = 0, b = 0;
        for (long long i = 0; i < arr.size(); i++)
        {
            a += (long long)arr[i] * arr[i] - (i + 1) * (i + 1);
            b += arr[i] - (i + 1);
        }
        long long c = a / b;
        int x = (b + c) / 2;
        int y = (c - b) / 2;
        int cnt1 = 0, cnt2 = 0;
        for (auto i : arr)
        {
            if (i == x)
                cnt1++;
        }
        if (cnt1 == 2)
            return {x, y};
        else
            return {y, x};
    }
};

int main()
{
    return 0;
}