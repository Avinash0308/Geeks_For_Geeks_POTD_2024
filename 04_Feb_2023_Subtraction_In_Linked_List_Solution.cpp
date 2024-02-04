#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val) : data(val), next(NULL) {}
};
class Solution
{
    Node *reverse(Node *h)
    {
        while (h && h->data == 0)
            h = h->next;
        if (!h)
            return NULL;
        Node *prev = NULL;
        while (h)
        {
            Node *next = h->next;
            h->next = prev;
            prev = h;
            h = next;
        }
        return prev;
    }
    int len(Node *h)
    {
        int val = 0;
        while (h && h->data == 0)
            h = h->next;
        if (!h)
            return 0;
        while (h)
        {
            val++;
            h = h->next;
        }
        return val;
    }
    int bigger(Node *h1, Node *h2)
    {
        if (h1 == NULL)
            return 1;
        if (h2 == NULL)
            return 0;
        int len_a = len(h1);
        int len_b = len(h2);
        if (len_a > len_b)
            return 0;
        if (len_a < len_b)
            return 1;
        while (h1 && h1->data == 0)
            h1 = h1->next;
        while (h2 && h2->data == 0)
            h2 = h2->next;
        while (h1 && h2)
        {
            if (h1->data > h2->data)
                return 0;
            if (h1->data < h2->data)
                return 1;
            h1 = h1->next;
            h2 = h2->next;
        }
        return 2;
    }
    Node *subtract(Node *h1, Node *h2)
    {
        Node *prev = NULL;
        while (h2)
        {
            if (h1->data < h2->data)
            {
                h1->data += 10;
                h1->next->data -= 1;
            }
            Node *cur = new Node(h1->data - h2->data);
            cur->next = prev;
            prev = cur;
            h1 = h1->next;
            h2 = h2->next;
        }
        while (h1)
        {
            if (h1->data < 0)
            {
                h1->data += 10;
                h1->next->data -= 1;
            }
            Node *cur = new Node(h1->data);
            cur->next = prev;
            prev = cur;
            h1 = h1->next;
        }
        while (prev->data == 0)
            prev = prev->next;
        return prev;
    }

public:
    Node *subLinkedList(Node *head1, Node *head2)
    {
        // Your implementation of subLinkedList goes here
        // Make sure to return the head of the resulting linked list
        int big = bigger(head1, head2);
        Node *ans;
        if (big == 2)
        {
            ans = new Node(0);
            return ans;
        }
        Node *a, *b;
        a = (big) ? head2 : head1;
        b = (big) ? head1 : head2;
        a = reverse(a);
        b = reverse(b);
        ans = subtract(a, b);
        return ans;
    }
};