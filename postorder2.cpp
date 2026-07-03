#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
      this->data=data;
      left=NULL;
      right=NULL;

    }
};

Node* craete_Tree(Node* &root ,int &count)
{
    int data;
  cout<<"Enter the data for node (-1 if this is the end )"<<endl;
  cin>>data;
  

  if(data==-1)
  {
    return NULL;
  }

  root = new Node(data);
  count++;

  cout<<"The data enterd at left  "<<data<<"is :"<<endl;
  root->left=craete_Tree(root->left,count);
   cout<<"The data enterd  at right  "<<data<<"is :"<<endl;
  root->right=craete_Tree(root->right,count);
  return root;

}

 void levelTree(Node* &root,int &count)
 {
     
    
       //queue<Node*>q;

       cout<<"Enter the data for the root :"<<endl;  
       int data;
       cin>>data;
      root=new Node(data);
         count++;
    Node** queue = new Node*[50];  

    int front = 0;
    int rear = 0;

    queue[rear++] = root;

      //q.push(root);
      while( front <rear) /*!q.empty()*/
      {
        Node* curr =queue[front++];
        // Node* curr =q.front();
        // q.pop();

       // cout<<curr->data<<endl;

        cout<<"Enter the data for "<<curr->data<<"left of node"<<endl;
         cin>>data;
         if (data!=-1)
         {
             curr->left=new Node(data);
              count++;
               //q.push(curr->left);
               queue[rear++]=curr->left;
         }
       
        cout<<"Enter the data for "<<curr->data<<" right of node"<<endl;
         cin>>data;
         if(data!=-1)
         {
             curr->right=new Node(data);
             count++;
            //  q.push(curr->right)
             queue[rear++]=curr->right;
         }

      }

 }

 void postorder(Node* root)
 {
    if(root==NULL)
    {
       
        return;
    }
   
   
    //   stack<Node*>s1;
    //   stack<Node*> s2;
    //   s1.push(root);

    int top1,top2;
    top1=-1;
    top2=-1;
    Node** stack1 = new Node*[50];
    Node** stack2 = new Node*[50];

    stack1[++top1]=root;





    
    while(top1!=-1)

    {
        
          Node* curr=stack1[top1--];
        //    s1.pop();
        //       s2.push(curr);

        stack2[++top2]=curr;

         

        if(curr->left!=NULL)
            // s1.push(curr->left);
            stack1[++top1]=curr->left;

        if(curr->right!=NULL)
          //s1.push(curr->right);
          stack1[++top1]=curr->right;

             
         
       
        
    }


    while(top2!=-1)
    {
        
        Node* curr=stack2[top2--];
        
        cout<<curr->data<<"->";
        //s2.pop();
       
    }
}


 
int main()
{
    Node* root =NULL;
    int count=0;
    //root=craete_Tree(root,count);
    
    levelTree(root,count);
    // cout<<"the total nodes:"<<count<<endl;
  // Traversal(root,count);
    // inorder(root);
    // cout<<"NULL"<<endl;
    //preorder(root);
    //   cout<<"NULL"<<endl;
       postorder(root);
    //     cout<<"NULL"<<endl;
     return 0;
}
