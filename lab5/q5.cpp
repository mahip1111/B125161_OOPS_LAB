// 5. Modify a Value
// Write a C++ program to modify data using overloaded functions. The program should:
// • add a specified value to an integer,
// • add a specified value to a floating-point number,
// • modify an integer value using its pointer.

// Display the value before and after modification.
// Hint: Pay attention to the difference between a normal variable and a pointer parameter.

#include <iostream>
using namespace std;

class ValueModifier {
public:
    // Function to add a specified value to an integer
    void modify(int &value, int addValue) {
        cout << "Before modification (int): " << value << endl;
        value += addValue;
        cout << "After modification (int): " << value << endl;
    }

    // Function to add a specified value to a floating-point number
    void modify(float &value, float addValue) {
        cout << "Before modification (float): " << value << endl;
        value += addValue;
        cout << "After modification (float): " << value << endl;
    }

    // Function to modify an integer value using its pointer
    void modify(int *valuePtr, int addValue) {
        cout << "Before modification (pointer): " << *valuePtr << endl;
        *valuePtr += addValue;
        cout << "After modification (pointer): " << *valuePtr << endl;
    }
};

int main() {
    ValueModifier modifier;
    int intVal = 10;
    float floatVal = 10.5f;

    // Test with integer reference
    modifier.modify(intVal, 5);

    // Test with floating-point reference
    modifier.modify(floatVal, 2.5f);

    // Test with integer pointer
    int intPtrVal = 20;
    modifier.modify(&intPtrVal, 10);

    return 0;
}