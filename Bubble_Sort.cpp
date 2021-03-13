#include <iostream>
using namespace std;

int main(void) {
    int list[100], i, j, size, temp;
    cout << "Enter the number of elements to be sorted: ";
    cin >> size;

    cout << "Enter " << size << " integer values: ";
    for (i = 0; i < size; i++)
        cin >> list[i];

    //Bubble sort logic
    for (i = 0; i < size; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (list[j] > list[j + 1]) {
                // swap the elements
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array(Bubble Sort): ";
    for (i = 0; i < size; i++)
        cout << " " << list[i];

    return 0;
}