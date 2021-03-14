#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* left;
    Node* right;
};
Node* root = NULL;

Node* insert(Node* root, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->left = new_node->right = NULL;
    if (root == NULL)
        return new_node;

    if (new_data <= root->data)
        root->left = insert(root->left, new_data);
    else
        root->right = insert(root->right, new_data);
    return root;
}

Node* search(Node* root, int key)
{
    if (root == NULL || root->data == key)
        return root;
    if (key > root->data)
        return search(root->right, key);
    return search(root->left, key);

}

Node* deleteNode(Node* root, int key) {
    if (root == NULL)
        return root;
    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else
    {
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = root->right;
        while (temp && temp->left != NULL)
            temp = temp->left;
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

//In-Ordert Traversal
void inOrder(Node* root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << "\t" << root->data;
        inOrder(root->right);
    }
}

//Pre-Ordert Traversal
void preOrder(Node* root)
{
    if (root != NULL)
    {
        cout << "\t" << root->data;
        preOrder(root->left);
        preOrder(root->right);
    }
}

//Post-Ordert Traversal
void postOrder(Node* root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << "\t" << root->data;
    }
}

int main(void)
{
    root = insert(root, 10);
    root = insert(root, 12);
    root = insert(root, 5);
    root = insert(root, 4);
    root = insert(root, 20);
    root = insert(root, 8);
    root = insert(root, 7);
    root = insert(root, 15);
    root = insert(root, 13);
    cout << "\nIn-Order Traversal in BST:\n";
    inOrder(root);

    int key = 12;
    if (search(root, key) == NULL)
        cout << endl << key << " is Not present in BST....\n";
    else
        cout << endl << key << " is present in BST....\n";

    root = deleteNode(root, 13);

    cout << "\nIn-Order Traversal in BST:\n";
    inOrder(root);
    cout << "\nPre-Order Traversal in BST:\n";
    preOrder(root);
    cout << "\nPost-Order Traversal in BST:\n";
    postOrder(root);
}