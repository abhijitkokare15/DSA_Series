/*
Definition for Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  // base case
  
    Node* lca(Node* root, int n1, int n2) {
       if(root==NULL)
       {
           return NULL;
       }
       
       
       
       if(root->data==n1 || root->data==n2)
       {
           return root;
       }
       
       Node* leftans = lca(root->left,n1,n2);
       Node* rightans=lca(root->right,n1,n2);
       
       
       if (leftans!=NULL && rightans!=NULL)
           return root;
            
      else if(leftans!=NULL && rightans==NULL)
           return leftans;
           
       else if(rightans!=NULL && leftans==NULL)
            return rightans;
        
        else 
           return  NULL;
    }
};