#include<iostream>
using namespace std;

class myClass {
    public:
        myClass() {
            cout << "Constructor Created!";
        }
};

int main() {
    myClass obj;
    return 0;
}