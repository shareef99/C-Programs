#include <iostream>
#include <string>

using namespace std;

int main() {
  int numbers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

  for (int i = 0; i < 10; i++) {
    cout << "Number at index " << i << " is " << numbers[i] << endl;
  }

  return 0;
}