#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
    int sumOfLastN_Nodes(struct Node *head, int n)
    {
        // Code here
        Node *h = head;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += head->data;
            head = head->next;
        }
        while (head)
        {
            sum += head->data;
            sum -= h->data;
            h = h->next;
            head = head->next;
        }
        return sum;
    }
};

int main()
{
    return 0;
}