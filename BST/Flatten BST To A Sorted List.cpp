#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void inorder(TreeNode<int>* root, vector<int>& data)
{
    if (root == NULL)
        return;

    inorder(root->left, data);
    data.push_back(root->data);
    inorder(root->right, data);
}
TreeNode<int>* flatten(TreeNode<int>* root)
{
    vector<int> data;
    inorder(root,data);

    TreeNode<int>* Nroot = new TreeNode<int>(data[0]);
    TreeNode<int>* curr=Nroot;

    for(int i=1;i<data.size();i++)
    {
        TreeNode<int>* tem = new TreeNode<int>(data[i]);
        curr->right=tem;
        curr->left=NULL;
        curr=tem;

    }
  // last node 
    curr->left=NULL;
    curr->right=NULL;

    return Nroot;
}    




