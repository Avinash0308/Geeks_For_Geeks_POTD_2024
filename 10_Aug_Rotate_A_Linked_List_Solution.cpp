#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    // Function to rotate a linked list.
    Node *rotate(Node *head, int k)
    {
        // Your code here
        Node *h = head;
        for (int i = 1; i < k; i++)
        {
            h = h->next;
        }
        if (h->next == NULL)
            return head;
        Node *x = h->next;
        h->next = NULL;
        Node *t = x;
        while (t->next)
            t = t->next;
        t->next = head;
        return x;
    }
};

int main()
{
    return 0;
}