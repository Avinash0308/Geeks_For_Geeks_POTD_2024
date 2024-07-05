#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
};

class Solution
{
public:
    // Function to find the vertical width of a Binary Tree.
    void solve(Node *root, int cur, int &a, int &b)
    {
        if (!root)
            return;
        a = min(a, cur);
        b = max(b, cur);
        solve(root->left, cur - 1, a, b);
        solve(root->right, cur + 1, a, b);
    }
    int verticalWidth(Node *root)
    {
        // code here
        if (!root)
            return 0;
        int mini = 0, maxy = 0;
        solve(root, 0, mini, maxy);
        return maxy - mini + 1;
    }
};

int main()
{
    return 0;
}