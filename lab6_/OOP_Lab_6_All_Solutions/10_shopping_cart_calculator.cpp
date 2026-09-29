#include <iostream>
#include <string>
using namespace std;

class Product {
    string name;
    double price;
    int quantity;

public:
    Product(string n = "", double p = 0, int q = 0) {
        name = n;
        price = p;
        quantity = q;
    }

    Product operator+(const Product& other) {
        if (name == other.name && price == other.price) {
            return Product(name, price, quantity + other.quantity);
        }

        cout << "Products cannot be combined because name or price differs.\n";
        return Product();
    }

    bool operator>(const Product& other) {
        return price * quantity > other.price * other.quantity;
    }

    double totalValue() {
        return price * quantity;
    }

    void display() {
        cout << "Product: " << name
             << ", Price: " << price
             << ", Quantity: " << quantity
             << ", Total Value: " << totalValue() << '\n';
    }
};

int main() {
    Product p1("Laptop", 50000, 2);
    Product p2("Laptop", 50000, 3);
    Product p3("Phone", 30000, 2);

    cout << "Product 1: "; p1.display();
    cout << "Product 2: "; p2.display();

    Product combined = p1 + p2;

    cout << "\nAfter addition:\n";
    combined.display();

    if (combined > p3)
        cout << "Combined product has greater total value than Product 3.\n";
    else
        cout << "Product 3 has greater or equal total value.\n";

    cout << "\nOriginal products remain unchanged:\n";
    cout << "Product 1: "; p1.display();
    cout << "Product 2: "; p2.display();

    return 0;
}
