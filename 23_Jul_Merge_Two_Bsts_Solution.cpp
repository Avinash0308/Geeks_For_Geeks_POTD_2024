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
    void solve(Node *a, vector<int> &ans)
    {
        if (!a)
            return;
        solve(a->left, ans);
        ans.push_back(a->data);
        solve(a->right, ans);
        return;
    }
    vector<int> merge(Node *root1, Node *root2)
    {
        // Your code here
        vector<int> ans1, ans2, ans;
        solve(root1, ans1);
        solve(root2, ans2);
        int i = 0, j = 0, n = ans1.size(), m = ans2.size();
        while (i < n && j < m)
        {
            if (ans1[i] <= ans2[j])
            {
                ans.push_back(ans1[i]);
                i++;
            }
            else
            {
                ans.push_back(ans2[j]);
                j++;
            }
        }
        while (i < n)
        {
            ans.push_back(ans1[i]);
            i++;
        }
        while (j < m)
        {
            ans.push_back(ans2[j]);
            j++;
        }
        return ans;
    }
};

int main()
{
    return 0;
}