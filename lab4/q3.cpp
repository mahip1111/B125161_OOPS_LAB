// arking Slot
// Create a class named ParkingSlot containing the following private data members:
// • Slot Number
// • Vehicle Number
// • Occupancy Status
// Write a friend function named checkSlot() that accesses the private members and dis-
// plays whether the parking slot is occupied or not. If it is occupied, display the vehicle number and slot number. If it is not occupied, display the slot number and a message that the slot is available.

#include <iostream>
using namespace std;

    class ParkingSlot {
    private:
        int slotNumber;
        string vehicleNumber;
        bool isOccupied;

    public:
        ParkingSlot(int slot, string vehicle, bool occupied) {
            slotNumber = slot;
            vehicleNumber = vehicle;
            isOccupied = occupied;
        }

        friend void checkSlot(ParkingSlot ps);
    };

void checkSlot(ParkingSlot ps) {
    cout << "Slot Number: " << ps.slotNumber << endl;

    if (ps.isOccupied) {
        cout << "Vehicle Number: " << ps.vehicleNumber << endl;
        cout << "Status: Occupied" << endl;
    } else {
        cout << "Status: Available" << endl;
    }
}

int main() {
    ParkingSlot ps(1, "ABC123", true);
    checkSlot(ps);
    return 0;
}