#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

    class Solution
{
public:
    Node *removeAllDuplicates(struct Node *head)
    {
        if (!head || !head->next)
            return head;

        Node *dummy;
        dummy->next = head;
        Node *prev = dummy;
        while (head)
        {
            if (head->next && head->data == head->next->data)
            {
                while (head->next != NULL && head->data == head->next->data)
                    head = head->next;
                prev->next = head->next;
            }
            else
            {
                prev = prev->next;
            }
            head = head->next;
        }
        return dummy->next;
    }
};

int main()
{
    return 0;
}