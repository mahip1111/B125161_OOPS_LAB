// Number Calculator
// Write a C++ program to perform a calculation using overloaded functions for:
// • two integer values,
// • three integer values,
// • two floating-point values.
// Display the result for each case.
// Hint: Use the same function name and differentiate the functions through their parameter lists.

#include <iostream>
using namespace std;

class Calculator {
public:
    // Function to calculate the sum of two integers
    int calculate(int a, int b) {
        return a + b;
    }

    // Function to calculate the sum of three integers
    int calculate(int a, int b, int c) {
        return a + b + c;
    }

    // Function to calculate the sum of two floating-point numbers
    float calculate(float a, float b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    cout << "Sum of two integers: " << calc.calculate(5, 10) << endl;
    cout << "Sum of three integers: " << calc.calculate(5, 10, 15) << endl;
    cout << "Sum of two floating-point numbers: " << calc.calculate(5.5f, 10.5f) << endl;
    return 0;
}
