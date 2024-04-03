#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
};

class Solution
{
    void solve(Node *root, int x, int y, int k, int &found, int &val, int &ans)
    {
        if (!root)
            return;
        if (root->data >= x && root->data <= y)
        {
            found = 1;
        }
        else if (root->data > y)
            solve(root->left, x, y, k, found, val, ans);
        else
            solve(root->right, x, y, k, found, val, ans);
        if (found)
        {
            val++;
            if (val == k)
                ans = root->data;
        }
    }

public:
    /*You are required to complete below function */
    int kthCommonAncestor(Node *root, int k, int x, int y)
    {
        // your code goes here
        int found = 0, val = 0, ans = -1;
        if (x > y)
            swap(x, y);
        solve(root, x, y, k, found, val, ans);
        return ans;
    }
};

int main()
{
    return 0;
}