#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    void convert(Node *head, TreeNode *&root)
    {
        queue<TreeNode *> q;
        root = new TreeNode(head->data);
        head = head->next;
        q.push(root);
        while (head)
        {
            int a = head->data;
            head = head->next;
            TreeNode *node = q.front();
            q.pop();
            node->left = new TreeNode(a);
            q.push(node->left);
            if (head)
            {
                a = head->data;
                node->right = new TreeNode(a);
                q.push(node->right);
                head = head->next;
            }
        }
    }
};

int main()
{
    return 0;
}