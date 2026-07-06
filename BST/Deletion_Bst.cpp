#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

// Find minimum node
Node *mini(Node *root)
{
    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

// Find maximum node
void maxi(Node *root)
{
    if (root == NULL)
        return;

    Node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }

    cout << "Maximum value in BST: " << temp->data << endl;
}

// Delete from BST
Node *deleteFromBst(Node *root, int val)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == val)
    {
        // 0 Child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 Left Child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        // 1 Right Child
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 Children
        if (root->left != NULL && root->right != NULL)
        {
            int small = mini(root->right)->data;
            root->data = small;
            root->right = deleteFromBst(root->right, small);
            return root;
        }
    }

    else if (val < root->data)
    {
        root->left = deleteFromBst(root->left, val);
        return root;
    }
    else
    {
        root->right = deleteFromBst(root->right, val);
        return root;
    }
}

// Insert into BST
Node *insertBst(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (data < root->data)
    {
        root->left = insertBst(root->left, data);
    }
    else
    {
        root->right = insertBst(root->right, data);
    }

    return root;
}

// Level Order Traversal
void levelOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;

            if (!q.empty())
                q.push(NULL);
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left)
                q.push(temp->left);

            if (temp->right)
                q.push(temp->right);
        }
    }
}

// Inorder
void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Preorder
void preorder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Postorder
void postorder(Node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = NULL;
    int data;

    cout << "Enter the values to be inserted into BST (-1 to stop): "<<endl;
    cin >> data;

    while (data != -1)
    {
        root = insertBst(root, data);
        cin >> data;
    }

    cout << "\nLevel Order Traversal:\n";
    levelOrderTraversal(root);

    if (root != NULL)
    {
        cout << "\nMinimum value in BST: " << mini(root)->data << endl;
        maxi(root);
    }

    cout << "\nInorder Traversal: ";
    inorder(root);

    cout << "\n\nEnter the data to be deleted: ";
    cin >> data;

    root = deleteFromBst(root, data);

    cout << "\nBST after deletion:\n";
    levelOrderTraversal(root);

    cout << "\nInorder Traversal: ";
    inorder(root);

    cout << endl;

    return 0;
}