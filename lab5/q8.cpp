// 8. Counting Operation
// Write a C++ program using overloaded functions to perform the following:
// • count the number of digits in an integer,
// • count the number of elements in an integer array,
// • count the occurrences of a given character in a character array.
// Display the result of each operation.
// Hint: Use the same function name but design different parameter lists for each operation.

#include <iostream>
using namespace std;

class Counter {
public:
    // Function to count the number of digits in an integer
    int count(int number) {
        int digitCount = 0;
        if (number == 0) return 1; // Special case for 0
        while (number != 0) {
            number /= 10;
            digitCount++;
        }
        return digitCount;
    }

    // Function to count the number of elements in an integer array
    int count(int arr[], int size) {
        return size; // Simply return the size of the array
    }

    // Function to count the occurrences of a given character in a character array
    int count(char arr[], int size, char target) {
        int occurrenceCount = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] == target) {
                occurrenceCount++;
            }
        }
        return occurrenceCount;
    }
};

int main() {
    Counter counter;
    // Test counting digits in an integer
    int digitCount = counter.count(12345);
    cout << "Number of digits in 12345: " << digitCount << endl;

    // Test counting elements in an integer array
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int elementCount = counter.count(arr, size);
    cout << "Number of elements in the array: " << elementCount << endl;

    // Test counting occurrences of a character in a character array
    char charArr[] = {'a', 'b', 'c', 'a', 'd', 'a'};
    int charSize = sizeof(charArr) / sizeof(charArr[0]);
    int occurrenceCount = counter.count(charArr, charSize, 'a');
    cout << "Occurrences of 'a' in the character array: " << occurrenceCount << endl;

    return 0;
}