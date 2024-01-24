#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int solve(int node, int parent, int n, vector<int> &visit, vector<vector<int>> &graph)
    {
        if (visit[node])
            return 0;
        visit[node] = 1;
        for (auto i : graph[node])
        {
            if (i == parent)
                continue;
            if (!solve(i, node, n, visit, graph))
                return 0;
        }
        return 1;
    }
    int isTree(int n, int m, vector<vector<int>> &adj)
    {
        // code here
        vector<int> visit(n);
        vector<vector<int>> graph(n);
        for (int i = 0; i < m; i++)
        {
            graph[adj[i][0]].push_back(adj[i][1]);
            graph[adj[i][1]].push_back(adj[i][0]);
        }
        int val = solve(0, -1, n, visit, graph);
        if (!val)
            return 0;
        for (int i = 0; i < n; i++)
        {
            if (!visit[i])
                return 0;
        }
        return 1;
    }
};