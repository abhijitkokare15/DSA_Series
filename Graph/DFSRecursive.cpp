#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Graph
{

    public:
      unordered_map<int,list<pair<int,int>>> adj;
      unordered_map <int,bool> vis;
       stack<int>  st;

     

      void addEdge(int u,int v,bool dir,int wt=0)
      {
        // direction 0=>un 1=>directed
        
        // create an edge from u and v 

       // adj[u].push_back(v);
       adj[u].push_back(make_pair(v,wt));



        if(dir==0)
        {
           // adj[v].push_back(u);
            adj[v].push_back(make_pair(u,wt));

        }


      }


    //   void dfs(int m,int startv ) // number of nodes 
    //   {
         
    //     st.push(startv);
    //     vis[startv]=1;
          
       
    //             while(!st.empty())
    //             {
    //                 int p = st.top();
    //                     st.top();
    //                 cout<<p <<"->";
                    
    //                 for(auto j :adj) 
    //                 {
    //                     int neg=j.first;
    //                    if(vis[neg]==0)
    //                    {
    //                       st.push(neg);
    //                       vis[neg]=1;

    //                  }
    //                 }
    //             }



    //         }
      


    //   void printAdj()
    //   {
    //     for ( auto i: adj)
    //     {
    //         cout<<i.first<<"->";
    //         for(auto j:i.second )
    //         {
    //           cout<<j.first <<"("<<j.second<<")" <<"->"<<endl;
    //         }

    //         cout<<"null"<< endl;
    //     }
    //   }


    void dfs(int v)
    { 

        vis[v]=1;
       cout<<v<<"->";

       for(auto j : adj[v])
       {
           int neg=j.first;



           if(!vis[neg])
           {
             dfs(neg);
           }
       }


    }

    };

    int main()
    {
        int n;
          cout<<"Enter the number of edges:"<<endl;
        cin>>n;

        int m;
        cout<<"Engter the number of vertices:"<<endl;
        cin>>m;
        
        int src;
        int des;
        int wt;
        Graph g;

        for(int i=0;i<n;i++)
        {
            cout<<"Enter the src destination :"<<endl;
            cin>>src;

            cout<<"Enter the destination:"<<endl;

            cin>>des;

            //   cout<<"Enter the weight of edges:"<<endl;

            // cin>>wt;

            

            g.addEdge(src,des,wt,0);

    
        }

        // cout<<"Your graph is "<<endl;
        // // g.printAdj();

         cout<<"Enter the vertex from you want to satrt :"<<endl;
         int vertex;

         cin>>vertex;

        g.dfs(vertex);
           return 0;
    }

