/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  Node* mappingParent(Node* root,  map <Node*,Node*> &myParent,int target)
  {
      queue<Node*> q;
      Node* ans=NULL;
      q.push(root);
      myParent[root]=NULL;
      
      while(!q.empty())
      {
          Node* front = q.front();
          q.pop();
          
          if(front->data==target)
          {
              ans=front;
          }
          
          if(front->left)
          {
              myParent[front->left]=front;
              q.push(front->left);
          }
          
           if(front->right)
          {
              myParent[front->right]=front;
              q.push(front->right);
          }
      }
      
      return ans;
      
  }
  
  int burnTime( Node* root,map <Node*,Node*> &myParent)
  {
      int time=0;
      queue<Node*> q;
      map<Node*,bool> vis;
      q.push(root);
      vis[root]=1;
      
      while(!q.empty())
      {
          int size=q.size();
           int flag=0;
         for(int i=0;i<size;i++)
         {
            
             Node* front =q.front();
             q.pop();
             
             if(front->left && !vis[front->left])
             {
                 flag=1;
                 q.push(front->left);
                 vis[front->left]=1;
             }
             
             if(front->right &&!vis[front->right])
             {
                 flag=1;
                 q.push(front->right);
                 vis[front->right]=1;
             }
             
              
             if(myParent[front] &&!vis[myParent[front]])
             {
                 flag=1;
                 q.push(myParent[front]);
                 vis[myParent[front]]=1;
             }
             
         }
         
         if(flag==1)
          time++;
      }
      
      return time;
      
  }
    int minTime(Node* root, int target) {
        // code here
       map <Node*,Node*> myParent;
            Node* burnNode=mappingParent(root,myParent,target);
  
            int time=burnTime(burnNode,myParent);
            
            return time;
    }      
};