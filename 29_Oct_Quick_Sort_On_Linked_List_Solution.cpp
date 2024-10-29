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
    Node *partition(Node *beg, Node *end)
    {
        Node *pivot = beg;
        Node *sec = beg->next;
        Node *prev = beg;
        while (sec != end->next)
        {
            if (pivot->data > sec->data)
            {
                swap(prev->next->data, sec->data);
                prev = prev->next;
            }
            sec = sec->next;
        }
        swap(prev->data, pivot->data);
        return prev;
    }
    void quick_sort(Node *first, Node *last)
    {
        if (first != last && first != NULL && last != NULL)
        {
            Node *part_ind = partition(first, last);
            quick_sort(first, part_ind);
            quick_sort(part_ind->next, last);
        }
        else
        {
            return;
        }
    }
    struct Node *quickSort(struct Node *head)
    {
        // code here
        if (!head || !head->next)
            return head;
        Node *h = head;
        while (h->next)
            h = h->next;
        quick_sort(head, h);
        return head;
    }
};

int main()
{
    return 0;
}