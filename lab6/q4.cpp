// Cinema Seat Update Acinema stores 8 seat numbers in an array. Write a program that uses pointer arithmetic to change the seat number at a position entered by the user. Display the seat numbers before and after the update. Condition: Do not use arr[position] for updating the element.

#include <iostream>
using namespace std;

int main() {
    int s[8] = {101, 102, 103, 104, 105, 106, 107, 108};
    int* ptr = s;

    cout << "seat numbers before updationg are:" << endl;
    for (int i = 0; i < 8; i++) {
        // cout << **&ptr << " ";
        cout<<*ptr<<" ";
        ptr++;
    }
    cout << endl;

    int position;
    cout << "Enter the position of the seat to update (0-7): ";
    cin >> position;

    if (position >= 0 && position < 8) {
        ptr = s + position; // Move pointer to the specified position
        int neww;
        cout << "Enter the new seat number: ";
        cin >> neww;
        *ptr = neww; // Update the seat number using pointer arithmetic
    } else {
        cout << "Invalid position!" << endl;
    }

    ptr = s; // Reset pointer to the beginning of the array
    cout << "Updated seat numbers:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;

    return 0;
}