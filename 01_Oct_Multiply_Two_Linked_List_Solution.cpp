#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

/*The method multiplies
two  linked lists l1 and l2
and returns their product*/

/* Multiply contents of two linked lists */
class solution
{
public:
    long long multiplyTwoLists(Node *first, Node *second)
    {
        // code here
        long long mod = 1e9 + 7;
        long long val1 = 0, val2 = 0;
        while (first)
        {
            val1 = (val1 * 10 + first->data) % mod;
            first = first->next;
        }
        while (second)
        {
            val2 = (val2 * 10 + second->data) % mod;
            second = second->next;
        }
        return (val1 * val2) % mod;
    }
};

int main()
{
    return 0;
}