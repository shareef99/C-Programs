#include<iostream>
using namespace std;

int main(void) {
    float a, b,res;
    cout << "Enter 2 numbers to divide: ";
    cin >> a;
    cin >> b;
    try {
        if(b==0)
            throw b;
        res = a/b;
        cout << a << "/" << b << " = " << res << endl;

    } catch(...) {
        cout << "Can't be divided by 0" << endl;
    }
    return 0;
}