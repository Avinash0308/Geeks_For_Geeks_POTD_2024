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
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head)
    {
        // Code here
        Node *a = head, *b = head;
        while (b && b->next)
        {
            b = b->next->next;
            a = a->next;
            if (a == b)
            {
                a = head;
                while (a != b)
                {
                    a = a->next;
                    b = b->next;
                }
                int len = 1;
                a = a->next;
                while (a != b)
                {
                    len++;
                    a = a->next;
                }
                return len;
            }
        }
        return 0;
    }
};

int main()
{
    return 0;
}