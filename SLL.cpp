// A simple CPP program to introduce a singly linked list 
#include <iostream> 
using namespace std;

class Node {
public:
    int data;
    Node* next;
};
Node* head = NULL;

void printList(Node* temp) {
    if (temp == NULL) {
        cout << "\nSLL is empty...";
        return;
    }
    cout << "\nElements in SLL are: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void addAtFirst(int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

void addAtLast(int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;

    if (head == NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = new_node;
    return;
}

void deleteAtFirst() {
    if (head == NULL) {
        cout << "SLL is Empty..." << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteList() {
    if (head == NULL) {
        cout << "SLL is Empty..." << endl;
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        head = temp->next;
        delete temp;
        temp = head;
    }
}

bool search(int key) {
    Node* temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}

int main(void) {
    addAtFirst(10);//10->NULL
    addAtFirst(20);//20->10->NULL
    printList(head);
    addAtLast(30);//20->10->30->NULL
    addAtLast(15);//20->10->30->15->NULL
    printList(head);
    int key = 23;
    if (search(key))
        cout << endl << key << " found in SLL...";
    else
        cout << endl << key << " not found in SLL...";
    deleteAtFirst();//10->23->30->17->15->NULL
    printList(head);
    deleteList();//SLL is empty
    printList(head);
}