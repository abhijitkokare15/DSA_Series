/*
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
  
  pair<int,int> solve(Node * root)
  {
      if(root==NULL)
      {
          pair<int,int> p = make_pair(0,0);
          
          return p;
      }
      
       pair<int,int> left=solve(root->left);
       pair<int,int> right=solve(root->right);
       
       pair<int,int> ans;
       
       ans.first=root->data+left.second+right.second;
       ans.second=max(left.first,left.second)+max(right.first,right.second);
       
       return ans;
        
        
      
  }
    int getMaxSum(Node *root) {
        // code here
        pair<int,int> p=solve(root);
        
    int res = max(p.first,p.second);
    return res;
    }
};