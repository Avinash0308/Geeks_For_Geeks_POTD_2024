#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};

    class Solution
{
public:
    int cur = -1;
    /*You are required to complete this method*/
    bool check(Node *root, int lvl = 0)
    {
        // Your code here
        if (root->left == NULL && root->right == NULL)
        {
            if (cur == -1)
            {
                cur = lvl;
                return true;
            }
            else if (lvl != cur)
                return false;
            else
                return true;
        }
        bool a = true, b = true;
        if (root->left)
            a = check(root->left, lvl + 1);
        if (root->right)
            b = check(root->right, lvl + 1);
        if (!a || !b)
            return false;
        return true;
    }
};