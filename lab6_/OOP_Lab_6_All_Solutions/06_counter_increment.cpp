#include <iostream>
using namespace std;

class Counter {
    int value;

public:
    Counter(int v = 0) {
        value = v;
    }

    // Prefix: ++c
    Counter& operator++() {
        ++value;
        return *this;
    }

    // Postfix: c++
    Counter operator++(int) {
        Counter old = *this;
        value++;
        return old;
    }

    int getValue() {
        return value;
    }
};

int main() {
    Counter c(5);

    cout << "Initial value: " << c.getValue() << '\n';

    cout << "Before prefix increment: " << c.getValue() << '\n';
    ++c;
    cout << "After prefix increment: " << c.getValue() << '\n';

    cout << "Before postfix increment: " << c.getValue() << '\n';
    c++;
    cout << "After postfix increment: " << c.getValue() << '\n';

    return 0;
}
