#include<iostream>
#include<conio.h>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node* prev;
};

Node* head = NULL;

void printList(Node* temp) {
    Node* last;
    if (temp == NULL) {
        cout << "\nDLL is Empty...";
        return;
    }

    cout << "\n Traversal in Forward Direction:\n";
    while (temp != NULL) {
        cout << " " << temp->data;
        last = temp;
        temp = temp->next;
    }

    cout << "\n Traversal in Reverse Direction:\n";
    while (last != NULL) {
        cout << " " << last->data;
        last = last->prev;
    }
}

void addAtFirst(int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = head;
    new_node->prev = NULL;
    if (head != NULL)
        head->prev = new_node;

    head = new_node;
}

void addAtLast(int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;
    Node* temp = head;
    if (head == NULL)
    {
        new_node->prev = NULL;
        head = new_node;
        return;
    }

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = new_node;
    new_node->prev = temp;
}

bool search(int key)
{
    if (head == NULL)
    {
        cout << "\n DLL is Empty...";
        exit(1);
    }
    Node* temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}

void deleteFirst() {
    if (head == NULL) {
        cout << "\nDLL is Empty";
        return;
    }
    Node* temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
}

void deleteList() {
    if (head == NULL) {
        cout << "\nDLL is Empty...";
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        head = head->next;
        delete temp;
        temp = head;
    }
}

int main(void) {
    addAtFirst(10); // 10->NULL
    addAtFirst(20); // 20->10->NULL
    addAtLast(30); // 20->10->30->NULL
    addAtLast(40); // 20->10->30->40->NULL
    printList(head);
    int key = 65;
    if (search(key))
        cout << endl << key << " found in DLL...";
    else
        cout << endl << key << " not found in DLL...";
    deleteFirst();//10->65->30->50->40->NULL
    printList(head);
    deleteList();//DLL is empty
    printList(head);
    return 0;
}