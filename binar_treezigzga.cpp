/*
class Node {
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
    vector<int> zigZagTraversal(Node* root) {
        // code here
       vector<int>result;
       
       if(root==NULL)
         return result;
         
        
    queue<Node*> q;
    q.push(root);
    bool dire=true;
    
    while(!q.empty())
    {
        int n=q.size();
        vector<int>ans(q.size());   // level ko store
        
      
        for(int i=0;i<n;i++)
        {
           Node*temp=q.front();
           q.pop();
           // left to right ya fir right to left
           int index=dire?i:n-i-1;
           ans[index]=temp->data;
           
            if(temp->left)
                q.push( temp->left);

            if(temp->right)
                q.push(temp->right);
            }
            //cahnge karo direction ko
            dire=!dire;
            
            for(auto i :ans)
            {
                result.push_back(i);
            }
           
        
    }
    return result;
    }
};