/*************************************************************
    Following is the Binary Serach Tree node structure

    template <typename T>
    class TreeNode
    {
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
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };

*************************************************************/
void inorder(TreeNode<int>* root, vector<int>& data)
{
    if (root == NULL)
        return;

    inorder(root->left, data);
    data.push_back(root->data);
    inorder(root->right, data);
}

TreeNode<int>* inorderToBST(int s,int e, vector<int>&data)
{

    if(s > e)
     return NULL;
    
    int mid =(s+e)/2;
    TreeNode<int>* root= new TreeNode<int>(data[mid]);
    root->left=inorderToBST(s,mid-1,data);
    root->right=inorderToBST(mid+1,e,data);

    return root;
}
TreeNode<int>* balancedBst(TreeNode<int>* root) {
   vector<int>data;
 
    inorder(root,data);
   
    return inorderToBST(0,data.size()-1,data);
}
