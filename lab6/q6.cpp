// Agrocery store stores the prices of 7 products. Write a function that receives: • Apointer to the first price. • Thenumberofproducts. Using pointer traversal, find and display the highest price. Condition: Do not use array indexing inside the function.

#include <iostream>
using namespace std;
    
void findHighestPrice(double *prices, int numProducts) {
    double *highestPrice = prices;  // Initialize to the first price
    // here prices point to the first element of the array and highestPrice also point to the first element of the array. We will traverse the array using pointer arithmetic and compare each price with the current highest price. If we find a price greater than the current highest price, we update highestPrice to point to that price.

    // Traverse the array using pointers
    for (int i = 0; i < numProducts; i++) {
        if (*(prices + i) > *highestPrice) {
            highestPrice = (prices + i);
        }
    }

    cout << "The highest price is: $" << *highestPrice << endl;
}

int main() {
    double prices[7] = {10.5, 20.0, 15.75, 25.25, 30.0, 12.5, 18.0};
    int numProducts = 7;

    findHighestPrice(prices, numProducts);

    return 0;
}