#include <bits/stdc++.h> 
/*
    Following is the class structure of BinaryTreeNode class for referance:

    class BinaryTreeNode {
       public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };
*/BinaryTreeNode<int>* BST(vector<int> &pr,int mini,int maxi,int &i)
{
    if(i>=pr.size())
    return NULL;

    if(pr[i] < mini || pr[i] > maxi)
    return NULL;

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(pr[i]);
           i++;
    root->left=BST(pr,mini,root->data,i);
    root->right=BST(pr,root->data,maxi,i);
    return root;

    
}
BinaryTreeNode<int>* preorderToBST(vector<int> &pr) {
int mini=INT_MIN;
int maxi=INT_MAX;
int i=0;

return  BST(pr,mini,maxi,i);


}
