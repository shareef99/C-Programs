#include<iostream>
using namespace std;

int main(void) {
    int list[100], first, last, mid, key, size, i;

    cout << "Enter the size of list: ";
    cin >> size;

    cout << "Enter " << size << " numbers in Accesding order: \n";
    for (i = 0; i < size; i++)
        cin >> list[i];

    cout << "Enter a number to search: ";
    cin >> key;

    first = 0;
    last = size - 1;
    mid = (first + last) / 2;
    while (first <= last) {
        if (list[mid] == key) {
            cout << "Element found at " << mid;
            break;
        }
        else if (list[mid] < key)
            first = mid + 1;
        else last = mid - 1;

        mid = (first + last) / 2;
    }
    if (first > last)
        cout << key << " Not found";

    return 0;
}
