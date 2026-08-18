// Train Seat Status
// Create a class named TrainSeat containing the following private data members:
// • Seat Number
// • Passenger Name
// • Booking Status
// Create a class named TicketChecker and declare it as a friend class of TrainSeat.
// The TicketChecker class should:
// 1. Display the seat details.
// 2. Check whether the seat is booked or available.
// 3. Display the passenger name if the seat is booked.
// Hint: The friend class can directly access the private members of TrainSeat.

#include <iostream>
using namespace std;

class TrainSeat {
private:
    int seatNumber;
    string passengerName;
    bool isBooked;

public:
    TrainSeat(int number, string name, bool booked) {
        seatNumber = number;
        passengerName = name;
        isBooked = booked;
    }

    friend class TicketChecker;
};

class TicketChecker {
public:
    void displaySeatDetails(TrainSeat ts) {
        cout << "Seat Number: " << ts.seatNumber << endl;
        cout << "Passenger Name: " << ts.passengerName << endl;
        cout << "Booking Status: " << (ts.isBooked ? "Booked" : "Available") << endl;
    }

    void checkBookingStatus(TrainSeat ts) {
        if (ts.isBooked)
            cout << "Seat is Booked" << endl;
        else
            cout << "Seat is Available" << endl;
    }

    void displayPassengerName(TrainSeat ts) {
        if (ts.isBooked)
            cout << "Passenger Name: " << ts.passengerName << endl;
    }
};

int main() {
    TrainSeat ts(101, "John Doe", true);
    TicketChecker tc;

    tc.displaySeatDetails(ts);
    tc.checkBookingStatus(ts);
    tc.displayPassengerName(ts);

    return 0;
}