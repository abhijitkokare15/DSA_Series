// approach 1

#include <bits/stdc++.h> 
// Following is the Binary Tree node structure
/**************
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
    
};
***************/
void inorder(BinaryTreeNode<int>* root, vector<int>& data)
{
    if (root == NULL)
        return;

    inorder(root->left, data);
    data.push_back(root->data);
    inorder(root->right, data);
}

bool chkSum(int target, vector<int>& data)
{
    int i = 0;
    int j = data.size() - 1;

    while (i < j)
    {
        int sum = data[i] + data[j];

        if (sum == target)
            return true;
        else if (sum < target)
            i++;
        else
            j--;
    }

    return false;
}

bool twoSumInBST(BinaryTreeNode<int>* root, int target)
{
    vector<int> data;

    inorder(root, data);

    return chkSum(target, data);
}

// tc->o(n)  sc ->o(n) 