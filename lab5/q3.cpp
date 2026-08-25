// Array Total
// Write a C++ program to calculate the total of elements using an overloaded function. The
// program should work with:
// • an integer array,
// • a floating-point array,
// • a portion of an integer array specified by the number of elements to consider.
// Display the calculated total in each case.
// Hint: Use the array type and/or additional parameters to distinguish the overloaded functions.

#include <iostream>
using namespace std;

class ArrayTotal {
public:
    int calculateTotal(int arr[], int size) {
        int total = 0;
        for (int i = 0; i < size; i++) {
            total += arr[i];
        }
        return total;
    }

    float calculateTotal(float arr[], int size) {
        float total = 0.0f;
        for (int i = 0; i < size; i++) {
            total += arr[i];
        }
        return total;
    }

    int calculateTotal(int arr[], int start, int end) {
        int total = 0;
        for (int i = start; i < end; i++) {
            total += arr[i];
        }
        return total;
    }
};

int main() {
    ArrayTotal totalCalculator;

    // Test with integer array
    int intArray[] = {1, 2, 3, 4, 5};
    cout << "Total of integer array: " << totalCalculator.calculateTotal(intArray, 5) << endl;

    // Test with floating-point array
    float floatArray[] = {1.5f, 2.5f, 3.5f, 4.5f, 5.5f};
    cout << "Total of floating-point array: " << totalCalculator.calculateTotal(floatArray, 5) << endl;

    // Test with a portion of an integer array
    cout << "Total of a portion of the integer array: " << totalCalculator.calculateTotal(intArray, 1, 4) << endl;

    return 0;
}