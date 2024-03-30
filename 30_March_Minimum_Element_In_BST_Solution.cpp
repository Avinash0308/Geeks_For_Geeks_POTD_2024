#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
// Utility function to create a new Tree Node
Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

class Solution
{
    public:
    int minValue(Node *root)
    {
        // Code here
        if (!root)
            return -1;
        if (root->left)
            return minValue(root->left);
        else
            return root->data;
    }
};
int main(){
    return 0;
}