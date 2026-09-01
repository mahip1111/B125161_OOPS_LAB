// . Library Shelf Alibrary stores the identification numbers of 6 books in an array. Write a program to: 1. Display all book IDs using a pointer. 2. Display the address of each book ID. Condition: Traverse the array using pointer increment.

#include <iostream>
using namespace std;

int main() {
    int bookIDs[6] = {101, 103, 103, 111, 105, 166};
    int* ptr = bookIDs; // Pointer to the first element of the array
 
    for (int i = 0; i < 6; i++) {
        cout << "Book ID: " << *ptr << endl;
        cout << "Address: " << ptr << endl;
        ptr++; // Increment the pointer to point to the next element
    }

    // NOTE: Here the 1000 to 1004 ho jata hai bcz pointer is incremented and it points to the next memory location of the array elements. Each integer typically takes 4 bytes in memory, so the addresses will be 4 bytes apart.

    return 0;
}