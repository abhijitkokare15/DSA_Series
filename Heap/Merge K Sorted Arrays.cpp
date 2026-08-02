#include <bits/stdc++.h> 

class Node
{
    public:
      int data;
      int i;
      int j;

      Node(int data,int i,int j)
      {
          this->data=data;
          this->i=i; // row // sun array ka number 
          this->j=j; //colum 
      }

};

class compare
{
    public:
      bool operator() (Node* a , Node* b)
      {
          return a -> data > b->data;
      }
};
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
   
   priority_queue<Node*,vector<Node*>,compare > minheap;
    
    vector<int> ans;

    for(int i=0;i<k;i++)
    {
        Node * temp = new Node(kArrays[i][0],i,0);
         minheap.push(temp);
}

  while(minheap.size() > 0)
  {
       Node* temp = minheap.top();
      int ele = minheap.top()->data;
       ans.push_back(ele);
       minheap.pop();

       int i= temp->i;
       int j= temp->j;
       // chk karo ki next value of j is present betn size

       if(j+1  <  kArrays[i].size())
       {
         Node* newn = new Node(kArrays[i][j+1],i,j+1);   
         minheap.push(newn);
       }


  }

  return ans;


}
