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
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        // Your code here
        if (!head)
            return true;
        Node *next = NULL, *prev = NULL, *h = head, *x = head;
        while (x && x->next)
        {
            x = x->next->next;
            next = h->next;
            h->next = prev;
            prev = h;
            h = next;
        }
        if (x)
            h = h->next;
        while (prev && h)
        {
            if (prev->data != h->data)
                return false;
            prev = prev->next;
            h = h->next;
        }
        if (prev || h)
            return false;
        return true;
    }
};

int main()
{
    return 0;
}