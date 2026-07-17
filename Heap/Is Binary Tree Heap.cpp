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
  bool isCBT(Node* root ,int i,int count)
  {
      if(root==NULL)
        return true;
    
    if(i >=count)
      return false;
     
     else
       {
           bool left = isCBT(root->left,2*i+1,count);
           bool right=isCBT(root->right,2*i+2,count);
           
              return(left && right);
       }
  }
  
  bool isHeapOrder(Node* root)
  {
      if(root->left ==NULL && root->right==NULL)
          return true;
    
      
     if(root->right==NULL) 
       return (root->data > root->left->data );
       
     else
         {
             bool left = isHeapOrder(root->left);
             bool right =isHeapOrder(root->right);
             int leftdata = root->left->data;
             int rightdata=root->right->data;
             int data = root->data;
             
             return (left && right && data > leftdata && data >rightdata);
         }
  }
  int NodeCount(Node* root)
  {
      if(root==NULL)
       return 0;
      
      int count= 1+ NodeCount(root->left)+ NodeCount(root->right);
      
      return count;
  }
    bool isHeap(Node* tree) {
    
       int count = NodeCount(tree);
       
       return (isCBT(tree,0,count) && isHeapOrder(tree));
        
    }
};