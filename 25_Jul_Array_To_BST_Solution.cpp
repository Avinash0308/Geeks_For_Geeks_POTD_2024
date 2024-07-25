#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
        : data(val), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
    Node *tree(vector<int> &v, int start, int end)
    {
        if (end < start)
            return NULL;
        int mid = (start + end) / 2;
        Node *cur = new Node(v[mid]);
        cur->left = tree(v, start, mid - 1);
        cur->right = tree(v, mid + 1, end);
        return cur;
    }
    Node *sortedArrayToBST(vector<int> &nums)
    {
        // Code here
        return tree(nums, 0, nums.size() - 1);
    }
};

int main()
{
    return 0;
}