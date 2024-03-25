#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void create(string &cur, vector<string> &ans, int one, int zero, int n)
    {
        if (one + zero == n)
        {
            ans.push_back(cur);
            return;
        }
        cur.push_back('1');
        create(cur, ans, one + 1, zero, n);
        cur.pop_back();
        if (one > zero)
        {
            cur.push_back('0');
            create(cur, ans, one, zero + 1, n);
            cur.pop_back();
        }
    }
    vector<string> NBitBinary(int n)
    {
        // Your code goes here
        string cur = "";
        vector<string> str;
        create(cur, str, 0, 0, n);
        return str;
    }
};

int main()
{
    return 0;
}