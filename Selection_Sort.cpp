#include<iostream>
using namespace std;

int main(void) {
    int size, i, j, temp, list[100];
    cout << "Enter the size of the List: ";
    cin >> size;

    cout << "Enter " << size << " integer values: ";
    for (i = 0; i < size; i++)
        cin >> list[i];

    //Selection sort logic
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (list[i] > list[j]) {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }

    cout << "List after sorting is(Selection Sort): ";
    for (i = 0; i < size; i++)
        cout << " " << list[i];
    return 0;
}