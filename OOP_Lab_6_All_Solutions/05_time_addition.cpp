#include <iostream>
using namespace std;

class Time {
    int hours, minutes;

public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    Time operator+(const Time& t) {
        Time result;
        result.hours = hours + t.hours;
        result.minutes = minutes + t.minutes;

        if (result.minutes >= 60) {
            result.hours += result.minutes / 60;
            result.minutes %= 60;
        }

        return result;
    }

    void display() {
        cout << hours << " hours " << minutes << " minutes\n";
    }
};

int main() {
    Time t1(4, 45), t2(2, 30);
    Time result = t1 + t2;

    cout << "Time 1: "; t1.display();
    cout << "Time 2: "; t2.display();
    cout << "Result: "; result.display();

    return 0;
}
