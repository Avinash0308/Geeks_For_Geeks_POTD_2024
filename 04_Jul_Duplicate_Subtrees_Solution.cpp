#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

class Solution
{
    string solve(Node *root, unordered_map<string, int> &h, vector<Node *> &ans)
    {
        if (!root)
        {
            return "-";
        }
        string ne = "";
        string val = to_string(root->data);
        ne += solve(root->left, h, ans);
        ne += val;
        ne += solve(root->right, h, ans);
        if (h.count(ne) == 0)
        {
            h[ne] = 1;
        }
        else if (h[ne] == 1)
        {
            ans.push_back(root);
            h[ne] = 2;
        }
        return ne;
    }

public:
    vector<Node *> printAllDups(Node *root)
    {
        // Code here
        unordered_map<string, int> h;
        vector<Node *> ans;
        solve(root, h, ans);
        return ans;
    }
};

int main()
{
    return 0;
}