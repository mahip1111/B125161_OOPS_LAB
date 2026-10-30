#include <iostream>
using namespace std;

class Date {
    int day, month, year;

public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    bool operator==(const Date& other) {
        return day == other.day &&
               month == other.month &&
               year == other.year;
    }

    void display() {
        cout << day << " " << month << " " << year << '\n';
    }
};

int main() {
    Date d1(15, 8, 2026);
    Date d2(15, 8, 2026);

    cout << "Date 1: "; d1.display();
    cout << "Date 2: "; d2.display();

    if (d1 == d2)
        cout << "Both dates are equal.\n";
    else
        cout << "Dates are not equal.\n";

    return 0;
}
