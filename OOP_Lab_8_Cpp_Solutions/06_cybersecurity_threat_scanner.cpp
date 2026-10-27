#include <iostream>
using namespace std;

class SecurityScanner {
public:
    virtual void scan(int threats) {
        cout << "Threats detected: " << threats << endl;
    }
    virtual ~SecurityScanner() = default;
};

class BasicScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        cout << "Basic scanner - threats detected: " << threats << endl;
    }
};

class AdvancedScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        int remaining = threats - (threats * 90 / 100);
        cout << "Advanced scanner - threats detected: " << threats << endl;
        cout << "Threats remaining after removing 90%: " << remaining << endl;
    }
};

int main() {
    int threats;
    cout << "Enter number of detected threats: ";
    cin >> threats;

    if (threats < 0) {
        cout << "Threat count cannot be negative." << endl;
        return 1;
    }

    BasicScanner basic;
    AdvancedScanner advanced;
    SecurityScanner* scanner = &basic;
    scanner->scan(threats);
    scanner = &advanced;
    scanner->scan(threats);
    return 0;
}
