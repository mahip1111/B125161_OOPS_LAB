#include <iostream>
using namespace std;

class Temperature {
    double celsius;

public:
    Temperature(double c = 0) {
        celsius = c;
    }

    bool operator<(const Temperature& t) {
        return celsius < t.celsius;
    }

    bool operator>(const Temperature& t) {
        return celsius > t.celsius;
    }

    double getValue() {
        return celsius;
    }
};

int main() {
    Temperature t1(25), t2(30);

    if (t1 < t2)
        cout << t1.getValue() << " C is lower than "
             << t2.getValue() << " C.\n";
    else if (t1 > t2)
        cout << t1.getValue() << " C is higher than "
             << t2.getValue() << " C.\n";
    else
        cout << "Both temperatures are equal.\n";

    return 0;
}
