#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    int height;
};

Node* root = NULL;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int height(Node* temp) {
    if (temp == NULL)
        return 0;
    return temp->height;
}

int getBalance(Node* temp) {
    if (temp == NULL)
        return 0;
    return height(temp->left) - height(temp->right);
}

Node* leftRotate(Node* root) {
    Node* temp1 = root->right;
    Node* temp2 = temp1->left;

    temp1->left = root;
    root->right = temp2;

    root->height = max(height(root->left), height(root->right)) + 1;
    temp1->height = max(height(temp1->left), height(temp1->right)) + 1;

    return temp1;
}

Node* rightRotate(Node* root) {
    Node* temp1 = root->left;
    Node* temp2 = temp1->right;

    temp1->right = root;
    root->left = temp2;

    root->height = max(height(root->left), height(root->right)) + 1;
    temp1->height = max(height(temp1->left), height(temp1->right)) + 1;

    return temp1;
}

Node* insert(Node* root, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->left = new_node->right = NULL;
    new_node->height = 1;

    if (root == NULL)
        return new_node;

    if (new_data < root->data)
        root->left = insert(root->left, new_data);
    else if (new_data > root->data)
        root->right = insert(root->right, new_data);
    else return root;

    root->height = 1 + max(height(root->left), height(root->right));

    int balance = getBalance(root);

    if (balance > 1 && new_data < root->left->data)
        return rightRotate(root);

    if (balance < -1 && new_data > root->right->data)
        return leftRotate(root);

    if (balance > 1 && new_data > root->left->data) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (balance < -1 && new_data < root->right->data) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

Node* deleteNode(Node* root, int key) {
    if (root == NULL)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if ((root->left == NULL) || (root->right == NULL)) {
            Node* temp = root->left ? root->left : root->right;

            if (temp == NULL) {
                temp = root;
                root = NULL;
            }
            else *root = *temp;
            delete temp;
        }
        else {
            Node* temp = root->right;
            while (temp->left != NULL)
                temp = temp->left;

            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }

    if (root == NULL)
        return root;

    root->height = 1 + max(height(root->left), height(root->right));

    int balance = getBalance(root);

    if (balance > 1 && getBalance(root->left) >= 0)
        return rightRotate(root);

    if (balance > 1 && getBalance(root->left) < 0) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (balance < -1 && getBalance(root->right) <= 0)
        return leftRotate(root);

    if (balance < -1 && getBalance(root->right) > 0) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

//In-Ordert Traversal
void inOrder(Node* root)
{
    if (root != NULL) {
        inOrder(root->left);
        cout << "\t" << root->data;
        inOrder(root->right);
    }
}

//Pre-Ordert Traversal
void preOrder(Node* root) {
    if (root != NULL) {
        cout << "\t" << root->data;
        preOrder(root->left);
        preOrder(root->right);
    }
}

//Post-Ordert Traversal
void postOrder(Node* root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        cout << "\t" << root->data;
    }
}

int main(void) {
    root = insert(root, 9);
    root = insert(root, 5);
    root = insert(root, 10);
    root = insert(root, 0);
    root = insert(root, 6);
    root = insert(root, 11);
    root = insert(root, -1);
    root = insert(root, 1);
    root = insert(root, 2);

    cout << "In-Order traversal of the constructed AVL tree is " << endl;
    inOrder(root);
    root = deleteNode(root, 10);
    cout << "\nPre-Order traversal after"
        << " deletion of 10 \n";
    preOrder(root);

    cout << "\nIn-Order Traversal in AVL Tree:\n";
    inOrder(root);
    cout << "\nPre-Order Traversal in AVL Tree:\n";
    preOrder(root);
    cout << "\nPost-Order Traversal in AVL Tree:\n";
    postOrder(root);
}
