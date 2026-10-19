#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Graph
{
    public: 
   
     int n;
     vector<vector<int>> adj;

    Graph(int n)
    {

        this->n=n;
         adj = vector<vector<int>>(n, vector<int>(n, 0));
    }
    


      void addEdge(int u,int v,int wt,bool dir)
      { 
        

        adj[u][v]=wt;
   
        if(dir==0)
        {
            adj[v][u]=wt;
        }
        

      }


      void printAdj()
      {
       
        for(int i=0;i<n;i++)
        { cout<<i<<"->";
            for(int j=0;j<n;j++)
            {
                if(adj[i][j] != 0)
                {
                    cout<<j<<"("<<adj[i][j]<<")"<<"->";
                }
            }
            cout<<"null"<<endl;
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
        Graph g(m);

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

