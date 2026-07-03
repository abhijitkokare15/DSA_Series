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


   void Traversal(Node* root,int count)
{
    if(root==NULL)
    {
        cout<<"There is nothing in the tree"<<endl;
        return;
    }
   int n=count*3;
    Node** queue = new Node*[n];  

    int front = 0;
    int rear = 0;

    queue[rear++] = root;
    queue[rear++] = NULL;

    int level = 0;
    cout << "Level " << level << ": ";
     
    count=1;

    while(front < rear)  // front!=n-1;
    {
        Node* temp = queue[front++];

        if(temp == NULL)
        {
            cout << endl;

            if(front < rear) // front == n-1;
            {
                queue[rear++] = NULL;
                cout << "Level " << ++level << ": ";
            }
        }
        else
        {
            
            cout << temp->data << " ";
           

            if(count%2==0)
            {
            if(temp->left)
                queue[rear++] = temp->left;

            if(temp->right)
                queue[rear++] = temp->right;
            }

            else
            {
                 if(temp->right)
                queue[rear++] = temp->right;

                 if(temp->left)
                queue[rear++] = temp->left;
            }
            count++;


        

        
    }

    delete[]queue;
}
}
 void inorder(Node* root)
 {
    if(root==NULL)
    {
        return;
    }

    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);
 }

 void preorder(Node* root)
 {
    
    if(root==NULL)
    {
        return;
    }

    cout<<root->data<<"->";
    preorder(root->left);
    preorder(root->right);
 }
 void postorder(Node* root)
 {
    if(root==NULL)
    {
        return;
    } 

    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"->";
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
         if(data!=-1)
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
int main()
{
    Node* root =NULL;
    int count=0;
    //root=craete_Tree(root,count);
    
    levelTree(root,count);
     cout<<"the total nodes:"<<count<<endl;
   Traversal(root,count);
    // inorder(root);
    // cout<<"NULL"<<endl;
    // preorder(root);
    //   cout<<"NULL"<<endl;
    //   postorder(root);
    //     cout<<"NULL"<<endl;
     return 0;
}
