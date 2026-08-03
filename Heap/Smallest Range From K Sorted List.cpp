#include<bits/stdc++.h>
class Node
{
    public:
       int data;
       int row;
       int col;

       Node(int d,int i,int j)
       {
           data = d;
           row = i;
           col = j;
       }
};

class compare
{
  public:  bool operator () (Node* a,Node *b)
   {
       return a->data > b->data;
   }
};


int kSorted(vector<vector<int>> &a, int k, int n) {
  priority_queue<Node*,vector<Node*>,compare> minheap;
   int mini=INT_MAX;
   int maxi =INT_MIN;
  //add karo starting ke first ele

   for(int i=0;i<k;i++)
   {
       int ele = a[i][0];
       maxi=max(maxi,ele);
       mini=min(mini,ele);
       minheap.push(new Node(ele,i,0));
   }
    
   int range = maxi - mini;
    while(! minheap.empty())
    {
        Node * temp = minheap.top();
         minheap.pop();

         mini=temp->data;

         if((maxi - mini) < range )
         {    
             range = maxi-mini;

         }

          if((temp->col+1) < n) 
          {
              int nele=a[temp->row][temp->col+1];
              maxi=max(maxi,nele);
              minheap.push(new Node(nele,temp->row,temp->col+1));
          }

          else
          {
              break;
          }

    }

    return (range +1);


}