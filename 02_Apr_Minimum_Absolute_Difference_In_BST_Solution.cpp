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
    pair<int, int> solve(Node *root, int &ans)
    {
        if (!root)
            return {INT_MAX, INT_MIN};
        pair<int, int> a = solve(root->left, ans);
        pair<int, int> b = solve(root->right, ans);
        if (a.second != INT_MIN)
            ans = min(ans, root->data - a.second);
        if (b.first != INT_MAX)
            ans = min(ans, b.first - root->data);
        int maxy = max({a.second, b.second, root->data});
        int miny = min({a.first, b.first, root->data});
        return {miny, maxy};
    }
    int absolute_diff(Node *root)
    {
        // Your code here
        int ans = INT_MAX;
        solve(root, ans);
        return ans;
    }
};

int main()
{
    return 0;
}