#include<iostream>
using namespace std;

class Node {
	public:
		int data;
		Node* left;
		Node* right;
};

Node* root = NULL;

Node* insert(Node* root, int newData) {
	Node* newNode = new Node();
	newNode->data = newData;
	newNode->right = newNode->left = NULL;
	
	if(root==NULL)
		return newNode;
	else if(newData <= root->data)
		root->left = insert(root->left, newData);
	else if(newData >= root->data)
		root->right = insert(root->right, newData);
		
	return root;
}

void inOrder(Node* root) {
	if(root!=NULL) {
		inOrder(root->left);
		cout << " " << root->data;
		inOrder(root->right);
	}
}

void preOrder(Node* root) {
	if(root!=NULL) {
		cout << " " << root->data;
		preOrder(root->left);
		preOrder(root->right);
	}
}

void postOrder(Node* root) {
	if(root!=NULL) {
		postOrder(root->left);
		postOrder(root->right);
		cout << " " << root->data;
	}
}

Node* search(Node* root, int key) {
	if(root==NULL || root->data == key)
		return root;
	else if(key < root->data)
		return search(root->left, key);
	else return search(root->right, key);
}

Node* deleteNode(Node* root, int key) {

	if (root == NULL) 
		return root; 

	if (key < root->data) 
		root->left = deleteNode(root->left, key); 
	else if (key > root->data) 
		root->right = deleteNode(root->right, key); 
	else { 
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

//Node* deleteNode(Node* root, int key) {
//	if(root==NULL)
//		return root;
//	if(key < root->data)
//		root->left = deleteNode(root->left, key);
//	else if(key > root->data)
//		root->right = deleteNode(root->left, key);
//	else {
//		if(root->left == NULL){
//			Node* temp = root->right;
//			delete root;
//			return temp;
//		} 
//		else if(root->right == NULL) {
//			Node* temp = root->left;
//			delete root;
//			return temp;
//		}
//		
//		Node* temp = root->right;
//		while(temp && temp->left != NULL)
//			temp = temp->left;
//			
//		root->data = temp->data;
//		root->right = deleteNode(root->right, temp->data);
//	}
//	return root;
//}

int main(void) {
	
	root=insert(root, 10);
	root=insert(root, 12);
	root=insert(root, 5);
	root=insert(root, 4);
	root=insert(root, 20);
	root=insert(root, 8);
	root=insert(root, 7);
	root=insert(root, 15);
	root=insert(root, 13);
	cout << "InOrder Traversal" << endl;
	inOrder(root);
	cout << endl << "PreOrder Traversal" << endl;
	preOrder(root);
	cout << endl << "PostOrder Traversal" << endl;
	postOrder(root);
	
	int key=58;
	if(search(root, key) == NULL) 
		cout << endl << key << " isn't present inside the BST" << endl;
	else cout << endl << key << " is present inside the BST" << endl;
	
	root = deleteNode(root, 12);
	inOrder(root);
	
	return 0;
}
