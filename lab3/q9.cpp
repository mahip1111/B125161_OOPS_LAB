#include <iostream>
#include <string>
using namespace std;

class Product {
public:
    int id;
    string name;
    float price;
    int quantity;

    void accept() {
        cout << "Enter Product ID: ";
        cin >> id;

        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, name);

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void display() {
        cout << "\nProduct ID: " << id
             << "\nProduct Name: " << name
             << "\nPrice: " << price
             << "\nQuantity: " << quantity << endl;
    }

    float totalCost() {
        return price * quantity;
    }
};

int main() {
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    Product *cart = new Product[n];

    float total = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nProduct " << i + 1 << endl;
        cart[i].accept();
    }

    cout << "\nProducts in Cart\n";

    for (int i = 0; i < n; i++) {
        cart[i].display();
        total += cart[i].totalCost();
    }

    cout << "\nTotal Amount = " << total << endl;

    delete[] cart;

    return 0;
}