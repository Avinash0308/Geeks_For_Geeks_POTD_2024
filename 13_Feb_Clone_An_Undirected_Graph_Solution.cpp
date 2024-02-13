#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    vector<Node *> neighbors;
    Node()
    {
        val = 0;
        neighbors = vector<Node *>();
    }
    Node(int _val)
    {
        val = _val;
        neighbors = vector<Node *>();
    }
    Node(int _val, vector<Node *> _neighbors)
    {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution
{
    unordered_map<Node *, Node *> dub;

public:
    Node *cloneGraph(Node *node)
    {
        Node *cur = new Node(node->val);
        dub[node] = cur;
        vector<Node *> padosi;
        for (auto h : node->neighbors)
        {
            if (dub.count(h) == 0)
            {
                Node *neigh = cloneGraph(h);
                padosi.push_back(neigh);
            }
            else
            {
                padosi.push_back(dub[h]);
            }
        }
        cur->neighbors = padosi;
        return cur;
    }
};
