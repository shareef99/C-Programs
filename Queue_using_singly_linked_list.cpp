#include <iostream>
using namespace std;

class Node {
	public:
		int data;
		Node* next;
};

Node* front=NULL;
Node* rear=NULL;

bool isEmpty() {
	return front == NULL || rear == NULL;
}

void enQueue(int new_data){
	//enQueue means Adding Element/item in queue.
	Node* new_node = new Node();
	
	if(!new_node) {
		cout<<"Heap overflow..." << endl;
		exit(1);
	}
	
	new_node->data = new_data;
	new_node->next = NULL;
	
	cout<< "enQueue: " << new_data << endl;
	
	if(isEmpty()){	
		front = rear = new_node;
	} else {
		rear->next = new_node;
		rear = new_node;
	}
	
}

int deQueue() {
	//deQueue means Remove Element/items from queue.
	int temp_data;
	
	if(isEmpty()) {
		cout<< "Queue Underflow..." << endl;
		exit(1);
	}
	
	Node* temp_node = front;
	temp_data = front->data;
	front = front->next;
	
	delete(temp_node);
	
	if(isEmpty()){
		rear = NULL;
	}
	
	return temp_data;	
}

void display() {
	
	Node* temp;
	
	if(isEmpty()){
		cout<< "Queue is empty" << endl;
		return ;
	}
	
	temp = front;
	
	cout<< "Elements in Queue are: " << endl;
	
	while(temp != NULL){
		cout<< temp->data << endl;
		temp = temp->next;
	}

}

int main(void){
	
	enQueue(10);
	enQueue(20);
	display();
	cout<< "Dequeued item is " << deQueue() << endl;
	cout<< "Dequeued item is " << deQueue() << endl;	
	display();
	enQueue(30);
	enQueue(40);
	enQueue(50);
	display();
	cout<< "Dequeued item is " << deQueue() << endl;
	cout<< "Dequeued item is " << deQueue() << endl;
	cout<< "Dequeued item is " << deQueue() << endl;
	display();
	
	return 0;	
}
