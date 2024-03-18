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
        left = right = NULL;
    }
};

class Solution
{
public:
    // Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node *root)
    {
        queue<Node *> q;
        q.push(root);
        vector<int> ans;
        while (!q.empty())
        {
            Node *temp = q.front();
            ans.push_back(temp->data);
            q.pop();
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}