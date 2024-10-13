#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        int data = x;
        next = NULL;
    }
};

// Complete this function
class Solution
{
public:
    void deleteAlt(struct Node *head)
    {
        // Code here
        Node *h = head;
        while (h && h->next)
        {
            h->next = h->next->next;
            h = h->next;
        }
    }
};

int main()
{
    return 0;
}