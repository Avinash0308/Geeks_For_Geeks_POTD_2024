#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
};

class Solution
{
public:
    void solve(Node *root, int n, int &ans)
    {
        if (!root)
            return;
        if (root->key <= n)
            ans = max(ans, root->key);
        solve(root->left, n, ans);
        solve(root->right, n, ans);
    }
    int findMaxForN(Node *root, int n)
    {
        // code here
        int ans = -1;
        solve(root, n, ans);
        return ans;
    }
};

int main()
{
    return 0;
}