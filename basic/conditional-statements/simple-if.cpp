#include <iostream>
#include <string>
using namespace std;

int main() {
  int age;
  string barName = "Happy Shareef Bar";

  cout << "Welcome to the " << barName << endl;
  cout << "Enter your age: ";
  cin >> age;

  if (age > 40) {
    cout << "You are not allowed because you are too old" << endl;
  } else if (age >= 18) {
    cout << "Welcome to the " << barName << endl;
  } else {
    cout << "Sorry, you are not allowed to enter." << endl;
  }
}