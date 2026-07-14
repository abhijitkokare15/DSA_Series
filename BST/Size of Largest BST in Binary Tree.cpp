/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

class info
{
public:
    int maxi;
    int mini;
    int size;
    bool isBst;
};

info solve(TreeNode *root, int &maxsize)
{
    // Base case
    if (root == NULL)
    {
        return {INT_MIN, INT_MAX, 0, true};
    }

    info left = solve(root->left, maxsize);
    info right = solve(root->right, maxsize);

    info curr;

    curr.size = left.size + right.size + 1;
    curr.maxi = max(root->data, right.maxi);
    curr.mini = min(root->data, left.mini);

    if (left.isBst && right.isBst &&
        root->data > left.maxi &&
        root->data < right.mini)
    {
        curr.isBst = true;
        maxsize = max(maxsize, curr.size);
    }
    else
    {
        curr.isBst = false;
    }

    return curr;
}

int largestBST(TreeNode *root)
{
    int maxsize = 0;

    solve(root, maxsize);

    return maxsize;
}