#include <iostream>
#include <string>
using namespace std;

class Employee {
    int id;
    string name;
    int months;
    float *earnings;

public:
    void accept() {
        cout << "Enter Employee ID: ";
        cin >> id;

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Number of Months: ";
        cin >> months;

        earnings = new float[months];

        cout << "Enter Monthly Earnings:\n";
        for (int i = 0; i < months; i++) {
            cin >> earnings[i];
        }
    }

    void display() {
        float total = 0;
        float highest = earnings[0];
        int month = 1;

        for (int i = 0; i < months; i++) {
            total += earnings[i];

            if (earnings[i] > highest) {
                highest = earnings[i];
                month = i + 1;
            }
        }

        float average = total / months;

        cout << "\nEmployee Details\n";
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Total Earnings: " << total << endl;
        cout << "Average Earnings: " << average << endl;
        cout << "Highest Earning Month: " << month << endl;
        cout << "Highest Earning: " << highest << endl;
    }

    ~Employee() {
        delete[] earnings;
    }
};

int main() {
    Employee e;
    e.accept();
    e.display();

    return 0;
}