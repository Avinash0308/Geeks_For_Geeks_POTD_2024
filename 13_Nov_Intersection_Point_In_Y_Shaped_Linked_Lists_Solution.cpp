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
    // Function to find intersection point in Y shaped Linked Lists.
    int intersectPoint(Node *head1, Node *head2)
    {
        // Your Code Here
        int n = 0, m = 0;
        Node *h = head1;
        while (h)
        {
            n++;
            h = h->next;
        }
        h = head2;
        while (h)
        {
            m++;
            h = h->next;
        }
        while (n > m)
        {
            head1 = head1->next;
            n--;
        }
        while (m > n)
        {
            head2 = head2->next;
            m--;
        }
        while (m--)
        {
            if (head1 == head2)
                return head1->data;
            head1 = head1->next;
            head2 = head2->next;
        }
        return -1;
    }
};

int main()
{
    return 0;
}