#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    // Function to count nodes of a linked list.
    int getCount(struct Node *head)
    {

        // Code here
        int ans = 0;
        while (head)
        {
            ans++;
            head = head->next;
        }
        return ans;
    }
};

int main()
{
    return 0;
}