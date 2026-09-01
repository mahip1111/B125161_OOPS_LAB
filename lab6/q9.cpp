// Parking Slot Monitor Aparking system does not know in advance how many parking slots it needs to store. Write a program that: 1. Dynamically allocates memory for n parking slot statuses. 2. Uses 0 for available and 1 for occupied. 3. Counts available and occupied slots using a pointer. 4. Releases the dynamically allocated memory.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number slots: ";
    cin >> n;

    int *slots = new int[n];

    cout << "Enter status of each slot:"<<endl;
    cout << "0 = Available, 1 = Occupied"<<endl;

    for (int i = 0; i < n; i++) {
        cin >> slots[i];
    }

    int available = 0;
    int occupied = 0;

    int *ptr = slots;

    for (int i = 0; i < n; i++) {
        if (*ptr == 0) {
            available++;
        }
        else if (*ptr == 1) {
            occupied++;
        }

        ptr++;
    }
    cout<<endl;
    cout << "Available slots: " << available << endl;
    cout << "Occupied slots: " << occupied << endl;

    delete[] slots;

    return 0;
}
