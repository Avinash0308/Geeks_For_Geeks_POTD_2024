#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
} *head;

class Solution
{
public:
    int count(struct Node *head, int key)
    {
        // add your code here
        int ans = 0;
        while (head)
        {
            ans += (head->data == key);
            head = head->next;
        }
        return ans;
    }
};

int main()
{
    return 0;
}