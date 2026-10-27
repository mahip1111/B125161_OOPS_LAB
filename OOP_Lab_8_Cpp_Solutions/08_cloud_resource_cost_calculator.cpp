#include <iostream>
#include <iomanip>
using namespace std;

class CloudResource {
public:
    virtual double calculateCost(double cpuHours) {
        return 0.0;
    }
    virtual ~CloudResource() = default;
};

class StandardInstance : public CloudResource {
public:
    double calculateCost(double cpuHours) override {
        double cost = cpuHours * 5.0;
        if (cpuHours > 100.0) cost *= 0.85;
        return cost;
    }
};

class PremiumInstance : public CloudResource {
public:
    double calculateCost(double cpuHours) override {
        double cost = cpuHours * 12.0;
        if (cpuHours > 100.0) cost *= 0.85;
        return cost;
    }
};

int main() {
    double cpuHours;
    cout << "Enter CPU usage in hours: ";
    cin >> cpuHours;

    if (cpuHours < 0) {
        cout << "CPU hours cannot be negative." << endl;
        return 1;
    }

    StandardInstance standard;
    PremiumInstance premium;
    cout << fixed << setprecision(2);
    cout << "Standard instance final cost: Rs. " << standard.calculateCost(cpuHours) << endl;
    cout << "Premium instance final cost: Rs. " << premium.calculateCost(cpuHours) << endl;
    return 0;
}
