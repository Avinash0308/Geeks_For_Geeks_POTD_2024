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
    Node *insertionSort(struct Node *head_ref)
    {
        // code here
        if (!head_ref || !(head_ref->next))
            return head_ref;
        Node *cur = head_ref, *head = head_ref;
        head_ref = head_ref->next;
        while (head_ref)
        {
            Node *next = head_ref->next;
            if (head_ref->data >= cur->data)
            {
                cur->next = head_ref;
                cur = cur->next;
                cur->next = NULL;
            }
            else if (head_ref->data <= head->data)
            {
                head_ref->next = head;
                head = head_ref;
            }
            else
            {
                Node *traverse = head;
                while (traverse->next && traverse->next->data < head_ref->data)
                {
                    traverse = traverse->next;
                }
                Node *p = traverse->next;
                traverse->next = head_ref;
                traverse->next->next = p;
            }
            cur->next = NULL;
            head_ref = next;
        }
        return head;
    }
};