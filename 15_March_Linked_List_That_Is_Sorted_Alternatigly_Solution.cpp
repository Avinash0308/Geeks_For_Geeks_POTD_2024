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
    // your task is to complete this function
    void sort(Node **head)
    {
        // Code here
        if (!(*head) || !((*head)->next))
            return;
        Node *h = (*head);
        Node *g = (*head)->next;
        Node *p = NULL;
        while (g && g->next)
        {
            Node *next = g->next->next;
            Node *nex1 = g->next;
            h->next = nex1;
            g->next = p;
            p = g;
            g = next;
            h = nex1;
        }
        if (g)
        {
            g->next = p;
            p = g;
            h->next = NULL;
        }
        Node *sec = p;
        h = *head;
        Node *back = NULL;
        if (p->data < h->data)
        {
            Node *store = p;
            p = p->next;
            store->next = *head;
            *head = store;
            back = store;
        }
        else
        {
            back = *head;
            h = h->next;
        }
        while (p && h)
        {
            if (h->data <= p->data)
            {
                back = h;
                h = h->next;
            }
            else
            {
                Node *store = p;
                p = p->next;
                store->next = h;
                back->next = store;
                back = store;
            }
        }
        if (!h)
            back->next = p;
    }
};

int main()
{

    return 0;
}