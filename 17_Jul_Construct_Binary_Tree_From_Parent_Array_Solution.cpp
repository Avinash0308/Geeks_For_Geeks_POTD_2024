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
    // Function to construct binary tree from parent array.
    Node *createTree(vector<int> parent)
    {
        // Your code here
        int root;
        unordered_map<int, Node *> mp;
        for (int i = 0; i < parent.size(); i++)
        {
            if (mp.count(i) == 0)
            {
                mp[i] = new Node(i);
            }
            if (parent[i] == -1)
            {
                root = i;
                continue;
            }
            else
            {
                if (mp.count(parent[i]) == 0)
                {
                    mp[parent[i]] = new Node(parent[i]);
                }
                if (mp[parent[i]]->left == NULL)
                {
                    mp[parent[i]]->left = mp[i];
                }
                else
                {
                    mp[parent[i]]->right = mp[i];
                }
            }
        }
        return mp[root];
    }
};

int main()
{
    return 0;
}