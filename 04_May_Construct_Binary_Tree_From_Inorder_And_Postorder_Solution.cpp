#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

    class Solution
{
public:
    // Function to return a tree created from postorder and inoreder traversals.
    Node *Tree(int in[], int post[], int a, int b, int &c)
    {
        if (a > b || c <= 0)
            return NULL;
        int x = a;
        while (x <= b && in[x] != post[c - 1])
            x++;
        if (x > b)
            return NULL;
        Node *cur = new Node(in[x]);
        c--;
        cur->right = Tree(in, post, x + 1, b, c);
        cur->left = Tree(in, post, a, x - 1, c);
        return cur;
    }
    Node *buildTree(int in[], int post[], int n)
    {
        // Your code here
        return Tree(in, post, 0, n - 1, n);
    }
};

int main()
{
    return 0;
}