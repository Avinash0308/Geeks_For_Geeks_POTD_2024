#include <bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    struct Node *next;

    Node(char x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    // task is to complete this function
    // function should return head to the list after making
    // necessary arrangements
    struct Node *arrangeCV(Node *head)
    {
        // Code here
        Node *vowel = NULL;
        Node *conso = NULL;
        Node *c_h = NULL;
        Node *v_h = NULL;
        while (head)
        {
            char c = head->data;
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                if (vowel)
                {
                    vowel->next = head;
                    vowel = vowel->next;
                    head = head->next;
                    vowel->next = NULL;
                }
                else
                {
                    vowel = head;
                    head = head->next;
                    vowel->next = NULL;
                    v_h = vowel;
                }
            }
            else
            {
                if (conso)
                {
                    conso->next = head;
                    conso = conso->next;
                    head = head->next;
                    conso->next = NULL;
                }
                else
                {
                    conso = head;
                    head = head->next;
                    conso->next = NULL;
                    c_h = conso;
                }
            }
        }
        if (vowel)
        {
            vowel->next = c_h;
            return v_h;
        }
        else
            return c_h;
    }
};

int main()
{
    return 0;
}