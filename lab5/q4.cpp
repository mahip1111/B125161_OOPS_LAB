// 4. Element Search
// Write a C++ program to search for an element using an overloaded function. The program
// should support:
// • searching for an integer in an integer array,
// • searching for a character in a character array,
// • searching for an integer only within a specified range of an integer array.
// Display the position of the element if it is found; otherwise, display an appropriate
// message.
// Hint: Keep the function name the same while changing the parameter list.

#include <iostream>
using namespace std;

class ElementSearch {
public:
    // Function to search for an integer in an integer array
    int search(int arr[], int size, int element) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == element) {
                return i; // Return the index if found
            }
        }
        return -1; // Return -1 if not found
    }

    // Function to search for a character in a character array
    int search(char arr[], int size, char element) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == element) {
                return i; // Return the index if found
            }
        }
        return -1; // Return -1 if not found
    }

    // Function to search for an integer within a specified range of an integer array
    int search(int arr[], int start, int end, int element) {
        for (int i = start; i <= end; i++) {
            if (arr[i] == element) {
                return i; // Return the index if found
            }
        }
        return -1; // Return -1 if not found
    }
};

int main() {
    ElementSearch searcher;
    int intArray[] = {1, 2, 3, 4, 5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

    // Test searching for an integer in an integer array
    int intIndex = searcher.search(intArray, 5, 3);
    if (intIndex != -1) {
        cout << "Integer found at index: " << intIndex << endl;
    } else {
        cout << "Integer not found." << endl;
    }

    // Test searching for a character in a character array
    int charIndex = searcher.search(charArray, 5, 'c');
    if (charIndex != -1) {
        cout << "Character found at index: " << charIndex << endl;
    } else {
        cout << "Character not found." << endl;
    }

    // Test searching for an integer within a specified range
    int rangeIndex = searcher.search(intArray, 1, 3, 3);
    if (rangeIndex != -1) {
        cout << "Integer found at index: " << rangeIndex << endl;
    } else {
        cout << "Integer not found in the specified range." << endl;
    }

    return 0;
}