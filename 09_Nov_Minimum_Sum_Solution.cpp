#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string sum(string a, string b)
    {
        string ans;
        int n = a.size(), m = b.size();
        int i = n - 1, j = m - 1;
        int rem = 0;
        while (i >= 0 && j >= 0)
        {
            rem = rem + (int)a[i] + (int)b[j] - 96;
            ans += to_string(rem % 10);
            rem /= 10;
            i--, j--;
        }
        while (i >= 0)
        {
            rem = rem + (int)a[i] - 48;
            ans += to_string(rem % 10);
            rem /= 10;
            i--;
        }
        while (j >= 0)
        {
            rem = rem + (int)b[j] - 48;
            ans += to_string(rem % 10);
            rem /= 10;
            j--;
        }
        while (rem)
        {
            ans += to_string(rem % 10);
            rem /= 10;
        }
        while (ans.size() > 1 && ans[ans.size() - 1] == '0')
            ans.pop_back();
        reverse(ans.begin(), ans.end());

        return ans;
    }
    string minSum(vector<int> &arr)
    {
        // code here
        vector<int> v(10);
        for (auto i : arr)
        {
            v[i]++;
        }
        string a, b;
        for (int i = 0; i < 10; i++)
        {
            while (v[i]--)
            {
                if (a.size() == b.size())
                    a += to_string(i);
                else
                    b += to_string(i);
            }
        }
        return sum(a, b);
    }
};

int main()
{
    return 0;
}