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
        left = NULL;
        right = NULL;
    }
};
class Solution
{
    int cur = 0, val = INT_MIN;

public:
    void solve(Node *root, int sum, int len)
    {
        if (!root)
        {
            if (len > cur)
            {
                cur = len;
                val = sum;
            }
            else if (len == cur)
                val = max(sum, val);
            return;
        }
        solve(root->left, sum + root->data, len + 1);
        solve(root->right, sum + root->data, len + 1);
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        // code here
        solve(root, 0, 0);
        return val;
    }
};

int main()
{
    return 0;
}