#include<iostream>
using namespace std;

int main(void) {
    int list[100], size, i, key;

    cout << "Enter the size of the list: ";
    cin >> size;

    cout << "Enter " << size << " numbers: ";
    for (i = 0; i < size; i++)
        cin >> list[i];

    cout << "Enter number to search: ";
    cin >> key;

    for (i = 0; i < size; i++) {
        if (list[i] == key) {
            cout << "Element found at index: " << i;
            break;
        }
    }
    
    if(i == size) {
    	cout << "Element not found in list";
	}
}
