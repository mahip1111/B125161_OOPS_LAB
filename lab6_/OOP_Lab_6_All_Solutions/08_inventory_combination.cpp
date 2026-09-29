#include <iostream>
#include <string>
using namespace std;

class Item {
    string name;
    double price;
    int quantity;

public:
    Item(string n = "", double p = 0, int q = 0) {
        name = n;
        price = p;
        quantity = q;
    }

    Item operator+(const Item& other) {
        if (name == other.name && price == other.price) {
            return Item(name, price, quantity + other.quantity);
        }

        cout << "Items are different or prices are different.\n";
        return Item();
    }

    void display() {
        cout << "Item: " << name
             << ", Price: " << price
             << ", Quantity: " << quantity << '\n';
    }
};

int main() {
    Item i1("Pen", 10, 5);
    Item i2("Pen", 10, 3);

    cout << "Item 1: "; i1.display();
    cout << "Item 2: "; i2.display();

    Item result = i1 + i2;

    cout << "Combined Item: ";
    result.display();

    cout << "\nOriginal items remain unchanged:\n";
    cout << "Item 1: "; i1.display();
    cout << "Item 2: "; i2.display();

    return 0;
}
