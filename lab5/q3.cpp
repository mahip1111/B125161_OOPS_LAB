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

    int intSize;
    cout << "Enter size of integer array: ";
    cin >> intSize;

    int *intArray = new int[intSize];
    cout << "Enter " << intSize << " integer values:\n";
    for (int i = 0; i < intSize; i++) {
        cin >> intArray[i];
    }

    int floatSize;
    cout << "Enter size of floating-point array: ";
    cin >> floatSize;

    float *floatArray = new float[floatSize];
    cout << "Enter " << floatSize << " floating-point values:\n";
    for (int i = 0; i < floatSize; i++) {
        cin >> floatArray[i];
    }

    int start, end;
    cout << "Enter the start and end index for integer portion: ";
    cin >> start >> end;

    if (start < 0 || end > intSize || start > end) {
        cout << "Invalid range!" << endl;
        delete[] intArray;
        delete[] floatArray;
        return 1;
    }

    cout << "Total of integer array: " << totalCalculator.calculateTotal(intArray, intSize) << endl;
    cout << "Total of floating-point array: " << totalCalculator.calculateTotal(floatArray, floatSize) << endl;
    cout << "Total of the selected portion of integer array: "
         << totalCalculator.calculateTotal(intArray, start, end) << endl;

    delete[] intArray;
    delete[] floatArray;

    return 0;
}