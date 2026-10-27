#include <iostream>
#include <iomanip>
using namespace std;

class Robot {
public:
    virtual double move(double distance) {
        return 0.0;
    }
    virtual ~Robot() = default;
};

class WheeledRobot : public Robot {
public:
    double move(double distance) override {
        return distance / 2.0;
    }
};

class TrackedRobot : public Robot {
public:
    double move(double distance) override {
        return distance / 1.2;
    }
};

int main() {
    double distance;
    cout << "Enter travel distance (metres): ";
    cin >> distance;

    if (distance < 0) {
        cout << "Distance cannot be negative." << endl;
        return 1;
    }

    WheeledRobot wheeled;
    TrackedRobot tracked;
    Robot* robot = &wheeled;
    cout << fixed << setprecision(2);
    cout << "Wheeled robot travel time: " << robot->move(distance) << " seconds" << endl;

    robot = &tracked;
    cout << "Tracked robot travel time: " << robot->move(distance) << " seconds" << endl;
    return 0;
}
