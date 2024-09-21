#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *random;

    Node(int x)
    {
        data = x;
        next = NULL;
        random = NULL;
    }
};

class Solution
{
public:
    Node *copyList(Node *head)
    {
        // Write your code here
        if (!head)
            return head;
        Node *h = head;
        while (h)
        {
            Node *next = h->next;
            h->next = new Node(h->data);
            h->next->next = next;
            h = h->next->next;
        }
        Node *ans = head->next;
        h = head;
        while (h)
        {
            if (h->random == NULL)
                h = h->next->next;
            else
            {
                h->next->random = h->random->next;
                h = h->next->next;
            }
        }
        h = head;
        while (h)
        {
            Node *next = h->next->next;
            h->next->next = (next == NULL) ? NULL : next->next;
            h->next = next;
            h = next;
        }
        return ans;
    }
};

int main()
{
    return 0;
}