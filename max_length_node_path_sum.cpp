/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */



class Solution {
  public:
  
     void max_sum(int &maxlen,int len,int &sum ,int &maxsum, Node  *root)
     {
         if(root==NULL)
         {
             if(len>maxlen)
             {
                 maxlen=len;
                 maxsum=sum;
             }
             
            else if(len==maxlen)
             {
                 maxsum=max(sum,maxsum);
             }
            
             
             return;
         }
         
          sum=sum+root->data;
         
          max_sum(maxlen,len+1,sum,maxsum,root->left);
          max_sum(maxlen,len+1,sum,maxsum,root->right);
          
          sum=sum-root->data;
         }
    int sumOfLongRootToLeafPath(Node *root) {
        int maxl=0;
        int l=0;
        int sum=0;
        int maxsum=INT_MIN;
        
         max_sum(maxl,l,sum,maxsum,root);
        
        return maxsum;
        
        
    }
};