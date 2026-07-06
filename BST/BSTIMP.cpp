#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
     int data;
     Node* left;
     Node* right;

     Node(int data){
        this->data=data;
        left=right=NULL;

     }
     };

 void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
          
            cout << endl;
            if(!q.empty()) { 
              
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}

void inorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void preorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}

 Node* insertBst(Node* root ,int data)
 {
     if(root==NULL)
     {

        root = new Node(data);
        return root;
     }
//left part
     if( data < root->data )
     {
              root->left=insertBst(root->left,data); 
     }
     //right part
     else{
         root->right=insertBst(root->right,data); 

     }
     return root;
 }
     int  main()
     {
        Node* root =NULL;
        int data;
        cout<<"Enter the values to be inserted into the tree:"<<endl;
        cin>>data;

        while(data!=-1)

        {
             root = insertBst(root,data);
             cin>>data;

        }
        cout<<endl;


        cout<<"post order traversal :"<<endl;
        postorder(root);
        cout<<endl;

          cout<<"Pre order traversal :"<<endl;
        preorder(root);
        cout<<endl;


          cout<<"In order traversal :"<<endl;
         inorder(root);
        cout<<endl;


          cout<<"level order traversal :"<<endl;
        levelOrderTraversal(root);
        cout<<endl;

        return 0;
    }

