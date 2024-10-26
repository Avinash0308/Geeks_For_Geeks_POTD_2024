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