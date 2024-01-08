#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
class Solution
{
    public:
    Node* reverse(Node* h){
        if(!h) return h;
        Node* prev = NULL;
        Node* cur = h;
        while(cur){
            Node* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        // your code goes here
        if(!node1) return reverse(node2);
        else if(!node2) return reverse(node1);
        Node* h = node1, *v = node2;
        if(node1->data > node2->data){
            h = node2;
            v = node1;
        }
        Node* start = h;
        while(h->next!= NULL && v!= NULL){
            if(h->next->data <= v->data){
                h = h->next;
            }
            else{
                Node* temp = h->next;
                Node* temp2 = v->next;
                h->next = v;
                h->next->next = temp;
                v = temp2;
                h = h->next;
            }
        }
        if(v)h->next = v;
        return reverse(start);
        
    }  
};