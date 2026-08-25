// 2. Value Comparison
// Write a C++ program to find the larger value using an overloaded function. The program
// should be able to compare:
// • two integers,
// • two floating-point numbers,
// • three integers.
// Display the appropriate result for each case.
// Hint: The overloaded functions may differ in the number or type of parameters.

#include <iostream>
using namespace std;

class ValueComparator {
public:
    // Function to find the larger of two integers
    int findLarger(int a, int b) {
        return (a > b) ? a : b;
    }

    // Function to find the larger of two floating-point numbers
    float findLarger(float a, float b) {
        return (a > b) ? a : b;
    }

    // Function to find the largest of three integers
    int findLarger(int a, int b, int c) {
        return max(a, max(b, c));
    }
};

int main() {
    ValueComparator comparator;
    cout << "Larger of two integers: " << comparator.findLarger(5, 10) << endl;
    cout << "Larger of two floating-point numbers: " << comparator.findLarger(5.5f, 10.5f) << endl;
    cout << "Largest of three integers: " << comparator.findLarger(5, 10, 15) << endl;
    return 0;
}