// C++ program to Implement a stack using singly linked list 
#include <iostream> 
using namespace std;

class Node {
public:
    int data;
    Node* next;
};
Node* top = NULL;

void push(int new_data)
{
    Node* new_node = new Node();

    if (!new_node)
    {
        cout << "\nHeap Overflow...";
        return;
    }

    new_node->data = new_data;
    new_node->next = top;
    top = new_node;
    cout << new_data << " pushed." << endl;
}


int isEmpty()
{
    return top == NULL;
}

int peek()
{
    if (isEmpty())
    {
        cout << "\nStack is Empty...";
        exit(1);
    }
    return top->data;
}


void pop()
{
    Node* temp;
    if (isEmpty())
    {
        cout << "\nStack Underflow..." << endl;
        return;
    }
    temp = top;
    top = top->next;
    temp->next = NULL;
    int pop_data = temp->data;
    delete temp;
    cout << endl << pop_data << " poped.";
}

void display()
{
    Node* temp;

    if (isEmpty())
    {
        cout << "\nStack is Empty…";
        return;
    }
    temp = top;
    cout << endl << "\nElements in Stack are:";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

//Main Function 
int main()
{
    // push the elements at top of the stack 
    push(11);
    push(22);
    push(33);
    push(44);
    // display stack elements
    display();

    // print top elementof stack 
    cout << "\nTop element is:" << peek();

    // pop top elements of stack 
    pop();
    pop();

    // display stack elements 
    display();
    pop();
    pop();
    // print top elementof stack 
    cout << "\nTop element is:" << peek();
    display();
    return 0;
}