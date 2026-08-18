// Smart Home Device
// Create a class named SmartDevice containing the following private data members:
// • Device Name
// • Device Type
// • Power Status
// Create a class named HomeController and declare it as a friend class of SmartDevice.
// The HomeController class should provide member functions to:
// 1. Display device information.
// 2. Turn the device ON.
// 3. Turn the device OFF.
// 4. Display the current power status.
// Hint: Since HomeController is a friend class, its member functions can directly access and
// modify the private members of SmartDevice.

#include <iostream>
using namespace std;

class SmartDevice {
private:
    string deviceName;
    string deviceType;
    bool powerStatus;

public:
    SmartDevice(string name, string type, bool status) {
        deviceName = name;
        deviceType = type;
        powerStatus = status;
    }

    friend class HomeController;
};

class HomeController {
public:
    void displayDeviceInformation(SmartDevice sd) {
        cout << "Device Name: " << sd.deviceName << endl;
        cout << "Device Type: " << sd.deviceType << endl;
    }

    void turnDeviceOn(SmartDevice &sd) {
        sd.powerStatus = true;
    }

    void turnDeviceOff(SmartDevice &sd) {
        sd.powerStatus = false;
    }

    void displayPowerStatus(SmartDevice sd) {
        cout << "Power Status: " << (sd.powerStatus ? "ON" : "OFF") << endl;
    }
};

int main() {
    SmartDevice device("Light", "Living Room", false);
    HomeController controller;

    controller.displayDeviceInformation(device);
    controller.displayPowerStatus(device);

    controller.turnDeviceOn(device);
    controller.displayPowerStatus(device);

    controller.turnDeviceOff(device);
    controller.displayPowerStatus(device);

    return 0;
}