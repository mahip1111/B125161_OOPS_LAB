// Delivery Counter Adelivery company stores the number of parcels delivered in a variable. Write a C++ program that creates a pointer to this variable. Display the number of parcels using the pointer, increase the number by a value entered by the user using the pointer, and display the updated number.

#include <iostream>
using namespace std;

int main() {
    int parcels = 10;
    int* ptr = &parcels;

    cout << "Initial number of parcels: " << *ptr << endl;

    int i;
    cout << "Enter the number of parcels to add: ";
    cin >> i;

    *ptr += i;  // Update the value of parcels using the pointer

    cout << "Updated number of parcels: " << *ptr << endl;

    return 0;
}