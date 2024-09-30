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
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    vector<int> merge(vector<int> &ans1, vector<int> &ans2)
    {
        int i = 0, j = 0;
        vector<int> ans;
        int n1 = ans1.size(), n2 = ans2.size();
        while (i < n1 && j < n2)
        {
            if (ans1[i] >= ans2[j])
            {
                ans.push_back(ans2[j]);
                j++;
            }
            else
            {
                ans.push_back(ans1[i]);
                i++;
            }
        }
        while (i < n1)
        {
            ans.push_back(ans1[i]);
            i++;
        }
        while (j < n2)
        {
            ans.push_back(ans2[j]);
            j++;
        }
        return ans;
    }
    void f(Node *root, vector<int> &ans)
    {
        if (root == NULL)
            return;
        f(root->left, ans);
        ans.push_back(root->data);
        f(root->right, ans);
    }
    vector<int> merge(Node *root1, Node *root2)
    {
        vector<int> ans1, ans2;
        f(root1, ans1);
        f(root2, ans2);
        vector<int> ans = merge(ans1, ans2);
        return ans;
    }
};

int main()
{
    return 0;
}