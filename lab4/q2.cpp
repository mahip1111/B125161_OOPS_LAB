#include <iostream>
using namespace std;

class Mobile {
private:
    string brand;
    string model;
    int batteryPercentage;

public:
    Mobile(string b, string m, int battery) {
        brand = b;
        model = m;
        batteryPercentage = battery;
    }

    friend void checkBattery(Mobile m);
};

void checkBattery(Mobile m) {
    cout << "Brand: " << m.brand << endl;
    cout << "Model: " << m.model << endl;
    cout << "Battery: " << m.batteryPercentage << "%" << endl;

    if (m.batteryPercentage < 20)
        cout << "Battery Low" << endl;
    else
        cout << "Battery Normal" << endl;
}

int main() {
    Mobile m("Samsung", "S24", 15);

    checkBattery(m);

    return 0;
}