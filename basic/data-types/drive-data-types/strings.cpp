#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  string *namePtr = &name;

  cout << "Enter your name: " << endl;
  cin >> name;
  cout << "Your name is: " << name << endl;
  cout << "Your name from namePtr is: " << *namePtr << endl;

  return 0;
}