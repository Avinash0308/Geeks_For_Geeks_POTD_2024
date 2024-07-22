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
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    bool solve(Node *root, int &ans, int &count, int &miny, int &maxy)
    {
        if (!root)
            return true;
        int c1 = 0, mi1 = INT_MAX, ma1 = INT_MIN, c2 = 0, mi2 = INT_MAX, ma2 = INT_MIN;
        bool x = solve(root->left, ans, c1, mi1, ma1), y = solve(root->right, ans, c2, mi2, ma2);
        count += c1 + c2 + 1;
        miny = min({miny, root->data, mi1, mi2});
        maxy = max({maxy, root->data, ma1, ma2});
        if (x && y)
        {
            if (ma1 < root->data && mi2 > root->data)
            {
                ans = max(ans, c1 + c2 + 1);
                return true;
                ;
            }
        }
        return false;
    }
    int largestBst(Node *root)
    {
        // Your code here
        int ans = 0, miny = INT_MAX, maxy = INT_MIN, count = 0;
        solve(root, ans, count, miny, maxy);
        return ans;
    }
};

int main()
{
    return 0;
}