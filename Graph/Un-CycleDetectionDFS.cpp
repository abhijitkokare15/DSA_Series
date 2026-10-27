#include <bits/stdc++.h>
using namespace std;

bool isCyclic(int i,int p, unordered_map<int, bool>& vis,
              unordered_map<int, list<int>>& adj)
{
   vis[i]=true;

   for(auto neg : adj[i])
   {
       if(!vis[neg] )
       {

        bool chk =  isCyclic(neg,i,vis,adj);
          if(chk)
            return true;

       }
         // cycle presnet

       else if(neg!=p)
       {
           return true;
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
            bool chk = isCyclic(i, -1,vis, adj);

            if (chk)
            {
                return "Yes";
            }
        }
    }

    return "No";
}