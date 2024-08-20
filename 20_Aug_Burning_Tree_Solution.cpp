#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
class Solution
{
public:
    int solve(Node *root, int t, int &ans)
    {
        if (!root)
            return 0;
        int a = solve(root->left, t, ans);
        int b = solve(root->right, t, ans);
        if (root->data == t)
        {
            ans = max({ans, a, b});
            return -1;
        }
        else
        {
            if (a >= 0 && b >= 0)
                return max(a, b) + 1;
            if (b >= 0)
                swap(a, b);
            ans = max(ans, a - b);
            return b - 1;
        }
    }
    int minTime(Node *root, int target)
    {
        // Your code goes here
        int ans = 0;
        solve(root, target, ans);
        return ans;
    }
};

int main()
{
    return 0;
}