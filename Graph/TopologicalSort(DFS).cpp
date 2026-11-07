#include <bits/stdc++.h>

void topo(int node, unordered_map<int, list<int>> &adj,
          unordered_map<int, bool> &vis,
          vector<int> &ans, int v)
{
    vis[node] = true;

    for (auto neg : adj[node])
    {
        if (!vis[neg])
        {
            topo(neg, adj, vis, ans, v);
        }
    }

    ans.push_back(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
{
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < e; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    unordered_map<int, bool> vis;
    vector<int> ans;

    for (int i = 0; i < v; i++)
    {
        if (!vis[i])
        {
            topo(i, adj, vis, ans, v);
        }
    }

    int l = 0;
    int r = ans.size() - 1;

    while (l < r)
    {
        swap(ans[l], ans[r]);
        l++;
        r--;
    }

    return ans; //we can also use stack 
} 