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
* /

    /*You are required to complete this method*/

    /* Function to get the middle of the linked list*/
    /*K will always be in range */

    class Solution
{
public:
    Node *deleteK(Node *head, int K)
    {
        // Your code here
        if (K == 1)
            return NULL;
        Node *prev = NULL;
        Node *cur = head;
        int count = 1;
        while (cur)
        {
            if (count % K == 0)
            {
                prev->next = cur->next;
                prev = prev->next;
            }
            else
            {
                prev = cur;
            }
            cur = cur->next;
            count++;
        }
        return head;
    }
};

int main()
{
    return 0;
}