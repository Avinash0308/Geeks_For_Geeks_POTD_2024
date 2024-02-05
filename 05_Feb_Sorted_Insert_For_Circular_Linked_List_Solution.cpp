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

// This function should return head of
// the modified list
class Solution
{
public:
    Node *sortedInsert(Node *head, int data)
    {
        // Your code here
        Node *cur = new Node(data);
        if (!head)
        {
            cur->next = cur;
            return cur;
        }
        Node *h = head;
        if (data <= head->data)
        {
            while (h->next != head)
                h = h->next;
            h->next = cur;
            cur->next = head;
            return cur;
        }
        else
        {
            while (h->next != head && h->next->data < data)
            {
                h = h->next;
            }
            Node *next = h->next;
            h->next = cur;
            cur->next = next;
        }
        return head;
    }
};