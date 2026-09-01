// Digital Wallet Balance Adigital wallet stores the current balance of a user. Create a pointer pointing to the balance. Using the pointer: 1. Display the current balance. 2. Addaspecified amount. 3. Deduct a specified amount. 4. Display the final balance.

#include <iostream>
using namespace std;

int main() {
    float balance= 10.5;
    float *ptr = &balance;
    cout << "Current balance: $" << *ptr << endl;
    float add;
    cout << "Enter amount to add: $";
    cin >> add;
    *ptr += add;
    cout << "Updated balance: $" << *ptr << endl;
    float deduct;
    cout << "Enter amount to deduct: $";
    cin >> deduct;
    *ptr -= deduct;
    cout << "Final balance: $" << *ptr << endl;
    return 0;
}