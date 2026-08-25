// 10. Overloaded Data Processor
// Write a C++ program that performs a common meaningful operation using overloaded
// functions for the following inputs:
// • two integers,
// • an integer and a floating-point value,
// • two floating-point values,
// • an integer array and its size,
// • two integer pointers.
// The operation should produce a meaningful result for every case. Demonstrate all over-
// loaded versions from main().
// Hint: Design the overloaded functions yourself. Carefully consider the number, type, and order
// of parameters when creating each version.

#include <iostream>
using namespace std;

// Two integers
int process(int a, int b)
{
    return a + b;
}

// Integer + floating-point
float process(int a, float b)
{
    return a + b;
}

// Two floating-point values
float process(float a, float b)
{
    return a + b;
}

// Integer array and its size
int process(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

// Two integer pointers
int process(int *a, int *b)
{
    return *a + *b;
}

int main()
{
    // Two integers
    cout << "Sum of two integers: "
         << process(10, 20) << endl;

    // Integer + float
    cout << "Sum of integer and float: "
         << process(10, 5.5f) << endl;

    // Two floats
    cout << "Sum of two floating-point values: "
         << process(2.5f, 3.5f) << endl;

    // Integer array
    int arr[] = {10, 20, 30, 40};

    cout << "Sum of integer array: "
         << process(arr, 4) << endl;

    // Two integer pointers
    int a = 100;
    int b = 200;

    cout << "Sum using two pointers: "
         << process(&a, &b) << endl;

    return 0;
}