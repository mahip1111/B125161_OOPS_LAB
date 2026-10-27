#include <iostream>
#include <iomanip>
using namespace std;

class Delivery {
public:
    virtual double estimateTime(double distance) {
        return 0.0;
    }
    virtual ~Delivery() = default;
};

class BikeDelivery : public Delivery {
public:
    double estimateTime(double distance) override {
        return (distance / 20.0) * 60.0 + 5.0;
    }
};

class DroneDelivery : public Delivery {
public:
    double estimateTime(double distance) override {
        return (distance / 40.0) * 60.0 + 2.0;
    }
};

int main() {
    double distance;
    cout << "Enter delivery distance (km): ";
    cin >> distance;

    if (distance < 0) {
        cout << "Distance cannot be negative." << endl;
        return 1;
    }

    BikeDelivery bike;
    DroneDelivery drone;
    cout << fixed << setprecision(2);
    cout << "Bike estimated time: " << bike.estimateTime(distance) << " minutes" << endl;
    cout << "Drone estimated time: " << drone.estimateTime(distance) << " minutes" << endl;
    return 0;
}
