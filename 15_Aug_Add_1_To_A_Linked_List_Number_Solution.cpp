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
    Node *solve(Node *head, int &val)
    {
        if (!head)
            return NULL;
        head->next = solve(head->next, val);
        if (val)
        {
            head->data++;
            if (head->data == 10)
            {
                head->data = 0;
            }
            else
            {
                val = 0;
            }
        }
        return head;
    }
    Node *addOne(Node *head)
    {
        // Your Code here
        // return head of list after adding one
        int val = 1;
        head = solve(head, val);
        if (val)
        {
            Node *ans = new Node(1);
            ans->next = head;
            return ans;
        }
        return head;
    }
};

int main()
{
    return 0;
}