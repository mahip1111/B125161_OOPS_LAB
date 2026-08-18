#include <iostream>
using namespace std;

class Door {
private:
    int doorNumber;
    bool lockStatus;

public:
    Door(int number, bool status) {
        doorNumber = number;
        lockStatus = status;
    }

    friend class SecuritySystem;
};

class SecuritySystem {
public:
    void checkLockStatus(Door d) {
        cout << "Door Number: " << d.doorNumber << endl;

        if (d.lockStatus)
            cout << "Door is Locked" << endl;
        else
            cout << "Door is Unlocked" << endl;
    }
};

int main() {
    Door d(101, true);

    SecuritySystem s;
    s.checkLockStatus(d);

    return 0;
}