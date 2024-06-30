#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;

  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }

};

class Solution
{
public:
    Node *deleteNode(Node *head, int x)
    {
        // Your code here
        if (x == 1)
        {
            head = head->next;
            head->prev = NULL;
            return head;
        }
        Node *h = head;
        for (int i = 0; i < x - 1; i++)
        {
            head = head->next;
        }
        head->prev->next = head->next;
        if (head->next)
            head->next->prev = head->prev;
        delete (head);
        return h;
    }
};

int main()
{
    return 0;
}