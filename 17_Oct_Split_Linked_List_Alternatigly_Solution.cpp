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
    // Function to split a linked list into two lists alternately
    vector<Node *> alternatingSplitList(struct Node *head)
    {
        // Your code here
        if (!head || !head->next)
            return {head, NULL};
        Node *ans1 = head, *ans2 = head->next;
        Node *a = head, *b = head->next;
        while (b)
        {
            a->next = b->next;
            if (b->next)
                b->next = b->next->next;
            a = a->next;
            b = b->next;
        }
        return {ans1, ans2};
    }
};

int main()
{
    return 0;
}