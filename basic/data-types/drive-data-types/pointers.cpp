#include <iostream>
using namespace std;

int main() {
  int a = 10;
  int *a_ptr = &a;

  cout << "Value of a: " << a << endl;
  cout << "Address of a: " << &a << endl;
  cout << "Value of a from a_ptr: " << *a_ptr << endl;
  cout << "Value of a from a_ptr: " << a_ptr << endl;

  cout << endl;

  a = 20;

  cout << "Value of a: " << a << endl;
  cout << "Address of a: " << &a << endl;
  cout << "Value of a from a_ptr: " << *a_ptr << endl;
  cout << "Value of a from a_ptr: " << a_ptr << endl;

  cout << endl;

  *a_ptr = 30;

  cout << "Value of a: " << a << endl;
  cout << "Address of a: " << &a << endl;
  cout << "Value of a from a_ptr: " << *a_ptr << endl;
  cout << "Value of a from a_ptr: " << a_ptr << endl;

  return 0;
}