#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex operator-(const Complex& c) {
        return Complex(real - c.real, imag - c.imag);
    }

    void display() {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i\n";
        else
            cout << " - " << -imag << "i\n";
    }
};

int main() {
    Complex c1(8, 5), c2(3, 2);
    Complex result = c1 - c2;

    cout << "C1 = "; c1.display();
    cout << "C2 = "; c2.display();
    cout << "C1 - C2 = "; result.display();

    return 0;
}
