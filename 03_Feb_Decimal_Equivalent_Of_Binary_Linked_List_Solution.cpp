#include <bits/stdc++.h>
using namespace std;
struct Node
{
    bool data; // NOTE data is bool
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
#include <bits/stdc++.h>
class Solution
{
public:
    // Should return decimal equivalent modulo 1000000007 of binary linked list
    long long unsigned int decimalValue(Node *head)
    {
        // Your Code Here
        long long unsigned int ans = 0;
        long long unsigned int mod = 1e9 + 7;
        while (head)
        {
            ans = ((ans * 2) % mod + head->data) % mod;
            head = head->next;
        }
        return ans;
    }
};