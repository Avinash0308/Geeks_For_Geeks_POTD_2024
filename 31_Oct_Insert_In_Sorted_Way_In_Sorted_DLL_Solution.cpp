#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *prev, *next;
};
* /
    // function should insert a new node in sorted way in
    // a sorted doubly linked list
    // Return the head after insertion
    class Solution
{
public:
    Node *sortedInsert(Node *head, int x)
    {
        // Code here
        Node *ins = new Node;
        ins->data = x;
        ins->prev = ins->next = NULL;
        if (!head)
            return ins;
        if (head->data >= x)
        {
            ins->next = head;
            return ins;
        }
        Node *h = head;
        while (h->next && h->next->data < x)
            h = h->next;
        Node *nex = h->next;
        h->next = ins;
        ins->next = nex;
        ins->prev = h;
        if (nex)
            nex->prev = ins;
        return head;
    }
};

int main()
{
    return 0;
}