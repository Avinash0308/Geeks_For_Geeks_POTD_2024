#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
};
void solve(vector<int> &ans, Node *node)
{
    if (!node)
        return;
    if (!(node->left) && node->right)
        ans.push_back(node->right->data);
    if (!(node->right) && node->left)
        ans.push_back(node->left->data);
    solve(ans, node->left);
    solve(ans, node->right);
}
vector<int> noSibling(Node *node)
{
    // code here
    vector<int> ans;
    solve(ans, node);
    if (ans.empty())
        return {-1};
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    return 0;
}