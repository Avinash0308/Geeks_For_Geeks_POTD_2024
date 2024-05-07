#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> ans;
    if (!root)
        return {};
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        ans.push_back(q.front()->data);
        if (q.front()->right)
            q.push(q.front()->right);
        if (q.front()->left)
            q.push(q.front()->left);
        q.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    return 0;
}