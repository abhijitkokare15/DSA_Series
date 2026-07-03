/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  
    void traversalRight(Node* root, vector<int>& result) {
        if (root == NULL)
            return;

        if (root->left == NULL && root->right == NULL)
            return;

        if (root->right)
            traversalRight(root->right, result);
        else
            traversalRight(root->left, result);

        result.push_back(root->data);
    }

    void LeafNode(Node* root, vector<int>& result) {
        if (root == NULL)
            return;

        if (root->left == NULL && root->right == NULL) {
            result.push_back(root->data);
            return;
        }

        LeafNode(root->left, result);
        LeafNode(root->right, result);
    }

    void traversalLeft(Node* root, vector<int>& result) {
        if (root == NULL)
            return;

        if (root->left == NULL && root->right == NULL)
            return;

        result.push_back(root->data);

        if (root->left)
            traversalLeft(root->left, result);
        else
            traversalLeft(root->right, result);
    }

    vector<int> boundaryTraversal(Node* root) {
        vector<int> result;

        if (root == NULL)
            return result;

        result.push_back(root->data);

        traversalLeft(root->left, result);

        LeafNode(root->left, result);
        LeafNode(root->right, result);

        traversalRight(root->right, result);

        return result;
    }
};-