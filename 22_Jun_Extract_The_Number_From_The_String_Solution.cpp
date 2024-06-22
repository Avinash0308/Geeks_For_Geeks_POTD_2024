#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string maxy(string a, string b)
    {
        if (a.size() == b.size())
        {
            if (a > b)
                return a;
            else
                return b;
        }
        if (b.size() > a.size())
            return b;
        else
            return a;
    }
    long long ExtractNumber(string sentence)
    {
        string cur = "0";
        int found = 0;
        int n = sentence.size();
        for (int i = 0; i < n; i++)
        {
            if (sentence[i] >= '0' && sentence[i] <= '9')
            {
                if (sentence[i] == '0')
                {
                    while (i < n && sentence[i] == '0')
                        i++;
                }
                if (sentence[i] >= '0' && sentence[i] <= '9')
                {

                    string th;
                    th.push_back(sentence[i]);
                    int nine = 0;
                    if (sentence[i] == '9')
                        nine = 1;
                    while (i + 1 < n && sentence[i + 1] >= '0' && sentence[i] <= '9')
                    {
                        th.push_back(sentence[i + 1]);
                        if (sentence[i + 1] == '9')
                            nine = 1;
                        i++;
                    }
                    if (nine)
                        continue;
                    found = 1;
                    cur = maxy(cur, th);
                }
                else
                {
                    found = 1;
                    cur = maxy(cur, "0");
                }
            }
        }
        if (!found)
            return -1;
        else
        {
            long long ans = 0;
            for (auto c : cur)
            {
                ans = ans * 10 + c - '0';
            }
            return ans;
        }
    }
};

int main()
{
    return 0;
}