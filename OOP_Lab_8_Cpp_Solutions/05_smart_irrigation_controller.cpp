#include <iostream>
#include <iomanip>
using namespace std;

class IrrigationSystem {
public:
    virtual double calculateWater(double moisture) {
        return 0.0;
    }
    virtual ~IrrigationSystem() = default;
};

class DripIrrigation : public IrrigationSystem {
public:
    double calculateWater(double moisture) override {
        return 2.0 * (100.0 - moisture);
    }
};

class SprinklerIrrigation : public IrrigationSystem {
public:
    double calculateWater(double moisture) override {
        return 3.0 * (100.0 - moisture);
    }
};

int main() {
    double moisture;
    cout << "Enter soil moisture percentage (0-100): ";
    cin >> moisture;

    if (moisture < 0 || moisture > 100) {
        cout << "Moisture must be between 0 and 100." << endl;
        return 1;
    }

    DripIrrigation drip;
    SprinklerIrrigation sprinkler;
    cout << fixed << setprecision(2);
    cout << "Drip irrigation water required: " << drip.calculateWater(moisture) << " litres" << endl;
    cout << "Sprinkler irrigation water required: " << sprinkler.calculateWater(moisture) << " litres" << endl;
    return 0;
}
