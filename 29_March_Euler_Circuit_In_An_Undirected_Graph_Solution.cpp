#include <bits/stdc++.h>
using namespace std;

bool isEularCircuitExist(int v, vector<int> adj[])
{
    for (int i = 0; i < v; i++)
    {
        if (adj[i].size() & 1)
            return false;
    }
    return true;
}

int main()
{
    return 0;
}