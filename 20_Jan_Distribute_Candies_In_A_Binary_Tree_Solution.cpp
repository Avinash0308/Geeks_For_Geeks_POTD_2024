#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *left, *right;
};


class Solution
{
    int ans = 0;

public:
    int distributeCand(Node *root)
    {
        // code here
        if (!root)
            return 0;
        int l = distributeCand(root->left);
        int r = distributeCand(root->right);
        ans += abs(l) + abs(r);
        int val = (root->key - 1 + l + r);
        return val;
    }
    int distributeCandy(Node *root)
    {
        int val = distributeCand(root);
        return ans;
    }
};