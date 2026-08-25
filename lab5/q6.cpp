// 6. Display Data
// Write a C++ program using function overloading to display:
// • an integer,
// • a floating-point number,
// • a character,
// • all elements of an integer array,
// • all elements of a character array.
// Use a common function name for displaying all types of data.
// Hint: The compiler should distinguish the functions using their parameter types or parameter
// lists.

#include <iostream>
using namespace std;

class DataDisplay {
public:
    // Function to display an integer
    void display(int value) {
        cout << "Integer: " << value << endl;
    }

    // Function to display a floating-point number
    void display(float value) {
        cout << "Floating-point: " << value << endl;
    }

    // Function to display a character
    void display(char value) {
        cout << "Character: " << value << endl;
    }

    // Function to display all elements of an integer array
    void display(int arr[], int size) {
        cout << "Integer Array: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Function to display all elements of a character array
    void display(char arr[], int size) {
        cout << "Character Array: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    DataDisplay display;
    int intArray[] = {1, 2, 3, 4, 5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

    // Test displaying an integer
    display.display(10);

    // Test displaying a floating-point number
    display.display(10.5f);

    // Test displaying a character
    display.display('c');

    // Test displaying an integer array
    display.display(intArray, 5);

    // Test displaying a character array
    display.display(charArray, 5);

    return 0;
}
