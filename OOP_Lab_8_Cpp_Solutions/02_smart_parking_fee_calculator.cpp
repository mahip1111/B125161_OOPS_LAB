#include <iostream>
#include <iomanip>
using namespace std;

class ParkingSlot {
public:
    virtual double calculateFee(int hours) {
        return 0.0;
    }
    virtual ~ParkingSlot() = default;
};

class TwoWheelerSlot : public ParkingSlot {
public:
    double calculateFee(int hours) override {
        double fee = hours * 10.0;
        if (hours > 5) fee *= 0.90;
        return fee;
    }
};

class FourWheelerSlot : public ParkingSlot {
public:
    double calculateFee(int hours) override {
        double fee = hours * 30.0;
        if (hours > 5) fee *= 0.90;
        return fee;
    }
};

int main() {
    int hours;
    cout << "Enter parking duration in hours: ";
    cin >> hours;

    if (hours < 0) {
        cout << "Hours cannot be negative." << endl;
        return 1;
    }

    TwoWheelerSlot twoWheeler;
    FourWheelerSlot fourWheeler;
    cout << fixed << setprecision(2);
    cout << "Two-wheeler final fee: Rs. " << twoWheeler.calculateFee(hours) << endl;
    cout << "Four-wheeler final fee: Rs. " << fourWheeler.calculateFee(hours) << endl;
    return 0;
}
