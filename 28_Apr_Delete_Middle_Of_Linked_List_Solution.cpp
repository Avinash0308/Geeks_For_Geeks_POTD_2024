#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};


// Deletes middle of linked list and returns head of the modified list
class Solution{
    public:
    Node* deleteMid(Node* head)
    {
        // Your Code Here
        if(!head || !head->next) return NULL;
        Node* prev = NULL;
        Node* slow = head;
        Node* fast = head;
        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = prev->next->next;
        return head;
    }
};

int main(){
    return 0;
}