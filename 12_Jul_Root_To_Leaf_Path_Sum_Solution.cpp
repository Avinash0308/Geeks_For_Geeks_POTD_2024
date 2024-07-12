#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

/*you are required to
complete this function */
class Solution
{
public:
    bool hasPathSum(Node *root, int target, int cur = 0)
    {
        // Your code here
        if (!root)
            return 0;
        if (!root->left && !root->right)
            return cur + root->data == target;
        return hasPathSum(root->left, target, cur + root->data) || hasPathSum(root->right, target, cur + root->data);
    }
};

int main()
{
    return 0;
}