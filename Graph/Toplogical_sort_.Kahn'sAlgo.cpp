#include <bits/stdc++.h>


vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
{
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < e; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }
  

  // find indgree 

  vector<int> in(v);

    for(auto i : adj)
    {
        for(auto j : i.second)
        {
              in[j]++;
        }
    }

// find indgree 0 and push in to queue

queue<int> bfs;
for(int i=0;i<v;i++)
{
    if(in[i]==0)
    {
        bfs.push(i);
    }
}

// do bfs 


vector<int> ans;

while(!bfs.empty())
{
    int f = bfs.front();
    bfs.pop();

    for(auto neg:adj[f])
    {
        in[neg]--;

        if(in[neg]==0)
        {
            bfs.push(neg);
        }
    }

    ans.push_back(f);

}






return ans;




} 