// 9. Maximum Value Finder
// Write a C++ program using function overloading to find the maximum value in the
// following cases:
// • between two integers,
// • between two values accessed through integer pointers,
// • among all elements of an integer array using a pointer and its size.
// Display the maximum value for each case.
// Hint: Carefully distinguish between an integer parameter, an integer pointer, and a pointer with
// an additional size parameter.

#include <iostream>
using namespace std;

// Maximum between two integers
int maximum(int a, int b)
{
    return (a > b) ? a : b;
}

// Maximum between two values using pointers
int maximum(int *a, int *b)
{
    return (*a > *b) ? *a : *b;
}

// Maximum in an array using pointer
int maximum(int *arr, int size)
{
    int maxValue = *arr;

    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) > maxValue)
            maxValue = *(arr + i);
    }

    return maxValue;
}

int main()
{
    cout << "Maximum of two integers: "
         << maximum(10, 50) << endl;

    int a = 25;
    int b = 40;

    cout << "Maximum using pointers: "
         << maximum(&a, &b) << endl;

    int arr[] = {10, 50, 20, 80, 30};

    cout << "Maximum in array: "
         << maximum(arr, 5) << endl;

    return 0;
}