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

void  postorder(Node* root)
{
    if(root == NULL)
        return;

    int top = -1;
    Node** stack = new Node*[50];

    Node* curr = root;

    while(curr != NULL || top != -1)
    {
        if(curr != NULL)
        {
            stack[++top] = curr;
            curr = curr->left;
        }
        else
        {
            Node* temp = stack[top]->right;

            if(temp == NULL)
            {
                temp = stack[top--];
                cout << temp->data << "->";

                while(top != -1 && temp == stack[top]->right)
                {
                    temp = stack[top--];
                    cout << temp->data << "->";
                }
            }
            else
            {
                curr = temp;
            }
        }
    }

    delete[] stack;
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
