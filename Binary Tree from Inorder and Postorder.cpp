/* Node Structure
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int x) {
        data = x;
        left = right = nullptr;
    }
}; */

class Solution {
    public:
      map<int,int> mapIndex(vector<int> inorder)
      {
          map<int,int> mp;
          for(int i=0;i<inorder.size();i++)
            {
                mp[inorder[i]]=i;
                    
            }
          
          return mp;
          
      }
      //   int findIndex(vector<int> inorder,int ele)
      //   {
      //       for(int i=0;i<inorder.size();i++)
      //       {
      //           if(inorder[i]==ele)
      //               return i;
      //       }
            
      //       return -1;
            
      //   }
      
      
      
      Node * solve(vector<int> inorder, vector<int> postorder,int &index,int start,int end,
      int n, map<int,int> mp)
      { 
          // base case
          if(index >=n || start > end )
          {
              return NULL;
          }
          
          int ele=postorder[index--];
          Node* root = new Node(ele);
          // int pos=findIndex(inorder,ele);
           int pos=mp[ele];
            root->right=solve(inorder,postorder,index,pos+1,end,n,mp);
          
            root->left=solve(inorder,postorder,index,start,pos-1,n,mp);
        
          return root;
           
          
          
          
          
      }
      Node *buildTree(vector<int> &inorder, vector<int> &postorder) {
          
          
         int n=inorder.size();
          int index=n-1;
         map<int,int> mp =mapIndex(inorder); 
         Node* root = solve(inorder,postorder,index,0,n-1,n,mp);
         return root;
         
      }
  };