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
    // Function to add two numbers represented by linked list.
    Node *reverse(Node *head)
    {
        if (!head || !head->next)
            return head;
        Node *prev = NULL;
        Node *next = NULL;
        while (head)
        {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    struct Node *addTwoLists(struct Node *num1, struct Node *num2)
    {
        // code here
        while (num1->next && num1->data == 0)
            num1 = num1->next;
        while (num2->next && num2->data == 0)
            num2 = num2->next;
        num1 = reverse(num1);
        num2 = reverse(num2);
        struct Node *head = NULL;
        struct Node *cur = NULL;
        int rem = 0;
        while (num1 && num2)
        {
            rem = rem + num1->data + num2->data;
            if (cur)
            {
                cur->next = new Node(rem % 10);
                cur = cur->next;
            }
            else
            {
                cur = new Node(rem % 10);
                head = cur;
            }
            num1 = num1->next;
            num2 = num2->next;
            rem /= 10;
        }
        while (num1)
        {
            rem = rem + num1->data;
            if (cur)
            {
                cur->next = new Node(rem % 10);
                cur = cur->next;
            }
            else
            {
                cur = new Node(rem % 10);
                head = cur;
            }
            rem /= 10;
            num1 = num1->next;
        }
        while (num2)
        {
            rem = rem + num2->data;
            if (cur)
            {
                cur->next = new Node(rem % 10);
                cur = cur->next;
            }
            else
            {
                cur = new Node(rem % 10);
                head = cur;
            }
            rem /= 10;
            num2 = num2->next;
        }
        while (rem)
        {
            if (cur)
            {
                cur->next = new Node(rem % 10);
                cur = cur->next;
            }
            else
            {
                cur = new Node(rem % 10);
                head = cur;
            }
            rem /= 10;
        }
        head = reverse(head);
        return head;
    }
};

int main()
{
    return 0;
}