#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *npx;

    Node(int x)
    {
        data = x;
        npx = NULL;
    }
};
struct Node *XOR(struct Node *a, struct Node *b)
{
    return (struct Node *)((uintptr_t)(a) ^ (uintptr_t)(b));
}

// function should insert the data to the front of the list
struct Node *insert(struct Node *head, int data)
{
    // Code here
    Node *h = new Node(data);
    h->npx = XOR(h, head);
    if (head)
        head->npx = XOR(head->npx, h);
    head = h;
    return head;
}

vector<int> getList(struct Node *head)
{
    // Code here
    Node *prev = NULL;
    vector<int> ans;
    while (head != NULL)
    {
        ans.push_back(head->data);
        Node *next = XOR(prev, head);
        next = XOR(next, head->npx);
        prev = head;
        head = next;
    }
    return ans;
}

int main()
{
    return 0;
}