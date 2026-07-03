/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  
  int dfs(Node *root){
      if(root==NULL)
         return 0;
        
        int h1=dfs(root->left);
        int h2=dfs(root->right);
        return max(h1,h2) + 1;
       
      
  }
 
    int height(Node* root) {
        return dfs(root) - 1;
       
    }
};