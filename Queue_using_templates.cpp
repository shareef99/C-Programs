#include <iostream>
using namespace std;

template <class T> class QueueDemo {
    T* queue;
    int capacity;
    int front;
    int rear;
    int count;
public:
    QueueDemo(int);
    void deQueue();
    void enQueue(T);
    T peekFront();
    T peekRear();
    int size();
    bool isEmpty();
    bool isFull();
};

template <class T> QueueDemo<T>::QueueDemo(int size) {
    queue = new T[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}

template <class T> void QueueDemo<T>::enQueue(T item) {
    if (isFull()) {
        cout << "OverFlow\nProgram Terminated\n";
        return;
    }
    cout << "Inserting: " << item << '\n';
    queue[++rear] = item;
    count++;
}

template <class T> void QueueDemo<T>::deQueue() {
    if (isEmpty()) {
        cout << "UnderFlow\nProgram Terminated\n";
        return;
    }
    cout << "\nRemoving: " << queue[front++] << '\n';
    count--;
}

template <class T> T QueueDemo<T>::peekFront() {
    if (isEmpty()) {
        cout << "UnderFlow\nProgram Terminated\n";
        return 0;
    }
    return queue[front];
}

template <class T> T QueueDemo<T>::peekRear() {
    if (isEmpty()) {
        cout << "UnderFlow\nProgram Terminated\n";
        return 0;
    }
    return queue[rear];
}

template <class T> int QueueDemo<T>::size() {
    return count;
}

template <class T> bool QueueDemo<T>::isEmpty() {
    return (count == 0);
}

template <class T> bool QueueDemo<T>::isFull() {
    return (rear == capacity - 1);
}

int main() {
    QueueDemo<string> que(4);

    que.enQueue("a");
    que.enQueue("b");
    que.enQueue("c");

    cout << "Front element is: " << que.peekFront() << endl;
    cout << "Rear element is: " << que.peekRear() << endl;
    que.deQueue();

    que.enQueue("d");

    cout << "Queue size is " << que.size() << endl;

    que.deQueue();
    que.deQueue();
    que.deQueue();

    if (que.isEmpty())
        cout << "Queue Is Empty\n";
    else
        cout << "Queue Is Not Empty\n";

    que.enQueue("e");
    que.deQueue();
    return 0;
}