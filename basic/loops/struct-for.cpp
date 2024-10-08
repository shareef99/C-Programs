#include <array>
#include <iostream>
#include <string>

using namespace std;

struct User {
  string name;
  int age;
};

int main() {
  int size;

  cout << "How many users you want to have?" << endl;
  cin >> size;

  User users[size];

  for (int i = 0; i < size; i++) {
    cout << "What you like to name your " << i + 1 << " user?" << endl;
    cin >> users[i].name;
    cout << "How old is your " << i + 1 << " user?" << endl;
    cin >> users[i].age;
  }

  cout << "Here are your users:" << endl;
  for (int i = 0; i < size; i++) {
    cout << "User " << i + 1 << " Name: " << users[i].name
         << " Age: " << users[i].age << endl;
  }

  return 0;
}