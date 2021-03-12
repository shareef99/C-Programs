#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
};

Node* root = NULL;

int count = 0;

Node* insert(Node* root, int newData) {

    Node* newNode = new Node();
    newNode->data = newData;

    if (root == NULL) {
        newNode->right = newNode->left = NULL;
        root = newNode;
        count++;
    }
    else if (count % 2 == 0)
        root->right = insert(root->right, newData);
    else root->left = insert(root->left, newData);

    return root;
}

void inOrder(Node* root) {
    if (root != NULL) {
        inOrder(root->left);
        cout << "\t" << root->data;
        inOrder(root->right);
    }
}

void preOrder(Node* root) {
    if (root != NULL) {
        cout << "\t" << root->data;
        inOrder(root->left);
        inOrder(root->right);
    }
}

void postOrder(Node* root) {
    if (root != NULL) {
        inOrder(root->left);
        inOrder(root->right);
        cout << "\t" << root->data;
    }
}

int main(void) {
    root = insert(root, 10);
    root = insert(root, 17);
    root = insert(root, 20);
    root = insert(root, 5);
    root = insert(root, 9);
    root = insert(root, 32);
    root = insert(root, 24);
    root = insert(root, 18);
    cout << "\nIn-Order Traversal in Binary Tree:\n";
    inOrder(root);
    cout << "\nPre-Order Traversal in Binary Tree:\n";
    preOrder(root);
    cout << "\nPost-Order Traversal in Binary Tree:\n";
    postOrder(root);
}