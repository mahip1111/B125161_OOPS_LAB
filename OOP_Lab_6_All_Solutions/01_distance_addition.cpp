#include <iostream>
using namespace std;

class Distance {
    int feet, inches;

public:
    Distance(int f = 0, int i = 0) {
        feet = f;
        inches = i;
    }

    Distance operator+(const Distance& d) {
        Distance result;
        result.feet = feet + d.feet;
        result.inches = inches + d.inches;

        if (result.inches >= 12) {
            result.feet += result.inches / 12;
            result.inches %= 12;
        }

        return result;
    }

    void display() {
        cout << feet << " feet " << inches << " inches\n";
    }
};

int main() {
    Distance d1(5, 8), d2(3, 7);
    Distance result = d1 + d2;

    cout << "Distance 1: "; d1.display();
    cout << "Distance 2: "; d2.display();
    cout << "Result: "; result.display();

    return 0;
}
