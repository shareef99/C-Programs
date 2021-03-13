#include<iostream>
using namespace std;

int main(void) {
    int size, i, j, temp, list[100];
    cout << "Enter the size of the list: ";
    cin >> size;

    cout << "Enter " << size << " integer values: ";
    for (i = 0; i < size; i++)
        cin >> list[i];

    //Insertion sort logic
    for (i = 1; i < size; i++) {
        temp = list[i];
        j = i - 1;
        while ((temp < list[j]) && (j >= 0)) {
            list[j + 1] = list[j];
            j = j - 1;
        }
        list[j + 1] = temp;
    }

    cout << "List after Sorting is(Insertion Sort):";
    for (i = 0; i < size; i++)
        cout << " " << list[i];
    return 0;
}