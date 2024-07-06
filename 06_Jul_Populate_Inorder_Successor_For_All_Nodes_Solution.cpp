#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    struct Node *next;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
        next = NULL;
    }
};

class Solution
{
public:
    void solve(Node *root, Node *&prev)
    {
        if (!root)
            return;
        solve(root->left, prev);
        if (prev)
            prev->next = root;
        prev = root;
        solve(root->right, prev);
    }
    void populateNext(Node *root)
    {
        // code here
        Node *prev = NULL;
        solve(root, prev);
    }
};

int main()
{
    return 0;
}