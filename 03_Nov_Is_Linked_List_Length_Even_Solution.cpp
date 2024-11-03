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
    bool isLengthEven(struct Node **hed)
    {
        // Code here
        Node *head = *hed;
        while (head && head->next)
            head = head->next->next;
        return head == NULL;
    }
};

int main()
{
    return 0;
}