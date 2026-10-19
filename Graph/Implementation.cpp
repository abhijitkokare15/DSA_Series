#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Graph
{

    public:
      unordered_map<int,list<pair<int,int>>> adj;


      void addEdge(int u,int v,int wt,bool dir)
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


      void printAdj()
      {
        for ( auto i: adj)
        {
            cout<<i.first<<"->";
            for(auto j:i.second )
            {
              cout<<j.first <<"("<<j.second<<")" <<"->"<<endl;
            }

            cout<<"null"<< endl;
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

              cout<<"Enter the weight of edges:"<<endl;

            cin>>wt;

            

            g.addEdge(src,des,wt,0);

    
        }

        cout<<"Your graph is "<<endl;
        g.printAdj();

           return 0;
    }

