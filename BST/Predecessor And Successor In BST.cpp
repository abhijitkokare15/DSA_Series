/*************************************************************

    Following is the Binary Tree node structure
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

*************************************************************/

pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    TreeNode* temp = root;

    int pred = -1;
    int succ = -1;

    while (temp && temp->data != key)
    {
        if (key < temp->data)
        {
            succ = temp->data;
            temp = temp->left;
        }
        else
        {
            pred = temp->data;
            temp = temp->right;
        }
    }

    if (temp == NULL)
        return {pred, succ};

    // Find predecessor
    TreeNode* left = temp->left;
    while (left)
    {
        pred = left->data;
        left = left->right;
    }

    // Find successor
    TreeNode* right = temp->right;
    while (right)
    {
        succ = right->data;
        right = right->left;
    }

    return {pred, succ};
}