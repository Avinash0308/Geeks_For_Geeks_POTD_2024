#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next, *prev;
    Node(int x)
    {
        data = x;
        next = prev = NULL;
    }
};

    class Solution
{
public:
    // Function to sort the given doubly linked list using Merge Sort.
    Node *merge(Node *h1, Node *h2)
    {
        Node *x = NULL;
        Node *head = NULL;
        while (h1 && h2)
        {
            Node *node;
            if (h1->data <= h2->data)
            {
                node = h1;
                h1 = h1->next;
                if (h1)
                    h1->prev = NULL;
            }
            else
            {
                node = h2;
                h2 = h2->next;
                if (h2)
                    h2->prev = NULL;
            }
            node->next = NULL;
            node->prev = NULL;
            if (head)
            {
                x->next = node;
                x->next->prev = x;
                x = x->next;
            }
            else
            {
                x = node;
                head = x;
            }
        }
        if (h1)
        {
            if (head)
            {
                x->next = h1;
                x->next->prev = x;
            }
            else
            {
                x = h1;
                head = x;
            }
        }
        else
        {
            if (head)
            {
                x->next = h2;
                x->next->prev = x;
            }
            else
            {
                x = h2;
                head = x;
            }
        }
        h1 = head;
        return h1;
    }
    Node *sorty(Node *head)
    {
        if (!head || !head->next)
            return head;
        Node *x = head;
        Node *y = head->next;
        while (y && y->next)
        {
            x = x->next;
            y = y->next->next;
        }
        Node *h = x->next;
        x->next = NULL;
        h->prev = NULL;
        head = sorty(head);
        h = sorty(h);
        return merge(head, h);
    }
    struct Node *sortDoubly(struct Node *head)
    {
        // Your code here
        return sorty(head);
    }
};

int main()
{
    return 0;
}