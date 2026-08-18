// ood Order
// Create a class named FoodOrder containing the following private data members:
// • Order ID
// • Food Item
// • Quantity
// • Price
// Write a friend function named calculateBill() that accesses the private members and
// calculates the total bill.
// Display the complete order details along with the total bill.

#include <iostream>
using namespace std;

class FoodOrder {
private:
    int orderId;
    string foodItem;
    int quantity;
    float price;
    
    public:
    FoodOrder(int id, string item, int qty, float p) {
        orderId = id;
        foodItem = item;
        quantity = qty;
        price = p;
    }

    friend void calculateBill(FoodOrder fo);
};

void calculateBill(FoodOrder fo) {
    float totalBill = fo.quantity * fo.price;
    cout << "Order ID: " << fo.orderId << endl;
    cout << "Food Item: " << fo.foodItem << endl;
    cout << "Quantity: " << fo.quantity << endl;
    cout << "Price: $" << fo.price << endl;
    cout << "Total Bill: $" << totalBill << endl;
}

int main() {
    FoodOrder fo(1, "Burger", 2, 10.0);
    calculateBill(fo);
    return 0;
}