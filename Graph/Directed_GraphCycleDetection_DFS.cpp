#include <bits/stdc++.h>
using namespace std;

bool isCyclic(int i, unordered_map<int, bool>& dfsvis,
              unordered_map<int, bool>& vis,
              unordered_map<int, list<int>>& adj)
{
    vis[i] = true;
    dfsvis[i] = true;

    for (auto neg : adj[i])
    {
        if (!vis[neg])
        {
            bool chk = isCyclic(neg, dfsvis, vis, adj);

            if (chk)
                return true;
        }
        else if (dfsvis[neg])
        {
            return true;
        }
    }

    dfsvis[i] = false;
    return false;
}

int detectCycleInDirectedGraph(int n, vector<pair<int, int>>& edges)
{
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
    }

    unordered_map<int, bool> vis;
    unordered_map<int, bool> dfsvis;

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            bool chk = isCyclic(i, dfsvis, vis, adj);

            if (chk)
                return 1;
        }
    }

    return 0;
}