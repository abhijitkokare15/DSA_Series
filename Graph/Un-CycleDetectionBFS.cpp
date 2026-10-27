#include <bits/stdc++.h>
using namespace std;

bool isCyclic(int i, unordered_map<int, bool>& vis,
              unordered_map<int, list<int>>& adj)
{
    vis[i] = 1;

    unordered_map<int, int> parent;
    parent[i] = -1;

    queue<int> q;
    q.push(i);

    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        for (auto lis : adj[front])
        {
            if (vis[lis] && lis != parent[front])
            {
                return true;
            }
            else if (!vis[lis])
            {
                q.push(lis);
                vis[lis] = 1;
                parent[lis] = front;
            }
        }
    }

    return false;
}

string cycleDetection(vector<vector<int>>& edges, int n, int m)
{
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < m; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int, bool> vis;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            bool chk = isCyclic(i, vis, adj);

            if (chk)
            {
                return "Yes";
            }
        }
    }

    return "No";
}