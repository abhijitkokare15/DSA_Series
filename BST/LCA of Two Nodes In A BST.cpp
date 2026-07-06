/************************************************************
    Following is the Binary Search Tree node structure

    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

************************************************************/

TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
{
    while(root!=NULL)
    {
         // go to right part
        if(root->data < P->data && root->data < Q->data)
            root=root->right;
        
        // go to left part
        else if(root->data > P->data && root->data > Q->data)
                root=root->left;

        else
            return root; // return root
    }

    return NULL;
}