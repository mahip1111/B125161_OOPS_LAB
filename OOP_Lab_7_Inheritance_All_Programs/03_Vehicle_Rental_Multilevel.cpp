#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string registrationNumber;
    int rentalDays;

public:
    Vehicle(string reg, int days)
        : registrationNumber(reg), rentalDays(days) {}
};

class Car : public Vehicle {
protected:
    double dailyRate;

public:
    Car(string reg, int days, double rate)
        : Vehicle(reg, days), dailyRate(rate) {}
};

class LuxuryCar : public Car {
private:
    double luxuryCharge;

public:
    LuxuryCar(string reg, int days, double rate, double charge)
        : Car(reg, days, rate), luxuryCharge(charge) {}

    void display() const {
        double totalCost = (dailyRate + luxuryCharge) * rentalDays;

        cout << "Registration Number: " << registrationNumber << '\n';
        cout << "Rental Days: " << rentalDays << '\n';
        cout << "Daily Rate: " << dailyRate << '\n';
        cout << "Luxury Charge per Day: " << luxuryCharge << '\n';
        cout << "Total Rental Cost: " << totalCost << '\n';
    }
};

int main() {
    LuxuryCar car("OD02AB1234", 5, 2000, 800);
    car.display();
    return 0;
}
