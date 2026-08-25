// Compare Data Sets
// Write a C++ program using overloaded functions to compare:
// • two integers,
// • two floating-point numbers,
// • two integer arrays of equal size.
// For individual values, display the larger value. For arrays, determine whether both arrays
// contain identical elements.
// Hint: The array version will require the array and its size as parameters.

#include <iostream>
using namespace std;

// Compare two integers
int compare(int a, int b)
{
    return (a > b) ? a : b;
}

// Compare two floating-point values
float compare(float a, float b)
{
    return (a > b) ? a : b;
}

// Compare two integer arrays
bool compare(int arr1[], int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr1[i] != arr2[i])
            return false;
    }

    return true;
}

int main()
{
    cout << "Larger integer: "
         << compare(20, 50) << endl;

    cout << "Larger floating-point value: "
         << compare(12.5f, 8.5f) << endl;

    int a[] = {10, 20, 30};
    int b[] = {10, 20, 30};

    if (compare(a, b, 3))
        cout << "Both arrays are identical." << endl;
    else
        cout << "Arrays are different." << endl;

    return 0;
}