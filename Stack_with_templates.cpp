#include <iostream>
using namespace std;

template <class T>
class stack {
    T* arr;
    int top;
    int capacity;
public:
    stack(int);
    void push(T);
    T pop();
    T peek();
    int size();
    bool isEmpty();
    bool isFull();
    ~stack()
    {
        delete[] arr;
    }
};

template <class T> stack<T>::stack(int size) {
    arr = new T[size];
    capacity = size;
    top = -1;
}

template <class T> void stack<T>::push(T t) {

    if (isFull())
    {
        cout << "OverFlow\nProgram Terminated\n";
        exit(1);
    }
    cout << "Inserting " << t << endl;
    arr[++top] = t;
}

template <class T> T stack<T>::pop() {
    if (isEmpty()) {
        cout << "UnderFlow\nProgram Terminated\n";
        exit(1);
    }
    cout << "Removing " << peek() << endl;
    return arr[top--];
}

template <class T> T stack<T>::peek() {
    if (isEmpty()) {
        exit(1);
    }
    else {
        return arr[top];
    }
}

template <class T> int stack<T>::size() {
    return top + 1;
}

template <class T> bool stack<T>::isEmpty() {
    return top == -1; // or return size() == 0;
}

template <class T> bool stack<T>::isFull() {
    return top == capacity - 1; // or return size() == capacity;
}

int main() {
    stack<string> st(2);
    st.push("A");
    st.push("B");
    st.pop();
    st.pop();
    st.push("C");
    cout << "Top element is: " << st.peek() << endl;
    cout << "Stack size is " << st.size() << endl;
    st.pop();
    if (st.isEmpty())
        cout << "Stack Is Empty\n";
    else cout << "Stack Is Not Empty\n";

    return 0;
}