#include <bits/stdc++.h>
using namespace std;

struct Node
{
    string data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    bool compute(Node *head)
    {
        // Your code goes here
        string s;
        while (head)
        {
            s += head->data;
            head = head->next;
        }
        int n = s.size();
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (s[i] != s[j])
                return false;
            i++, j--;
        }
        return true;
    }
};

int main()
{
    return 0;
}