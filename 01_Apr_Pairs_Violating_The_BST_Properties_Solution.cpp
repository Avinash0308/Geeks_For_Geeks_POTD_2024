#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
};

class Solution
{
public:
    /*You are required to complete below function */
    void doit(Node *root, vector<int> &in)
    {
        if (root)
        {
            doit(root->left, in);
            in.push_back(root->data);
            doit(root->right, in);
        }
    }
    int pairsViolatingBST(int n, Node *root)
    {
        // your code goes here
        vector<int> in;
        doit(root, in);
        int ans = 0;
        vector<int> x;
        x.push_back(in[n - 1]);
        in.pop_back();
        for (int i = n - 2; i >= 0; i--)
        {
            int ind = (lower_bound(x.begin(), x.end(), in[i]) - x.begin());
            ans += ind;
            x.insert(x.begin() + ind, in[i]);
        }
        return ans;
    }
};

int main()
{
    return 0;
}