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
    // Function to store the zig zag order traversal of tree in a list.
    vector<int> zigZagTraversal(Node *root)
    {
        // Code here
        if (!root)
            return {};
        int ind = 0;
        vector<Node *> v;
        vector<int> ans;
        v.push_back(root);
        while (!v.empty())
        {
            vector<Node *> x;
            reverse(v.begin(), v.end());
            if (ind % 2)
            {
                for (auto i : v)
                {
                    ans.push_back(i->data);
                    if (i->right)
                        x.push_back(i->right);
                    if (i->left)
                        x.push_back(i->left);
                }
            }
            else
            {
                for (auto i : v)
                {
                    ans.push_back(i->data);
                    if (i->left)
                        x.push_back(i->left);
                    if (i->right)
                        x.push_back(i->right);
                }
            }
            ind++;
            v = x;
        }
        return ans;
    }
};

int main()
{
    return 0;
}