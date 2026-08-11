#include <iostream>
#include <string>
using namespace std;

class Employee {
    int id;
    string name;
    int salary;

public:
    void accept() {
        cout << "Enter Employee ID: ";
        cin >> id;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\nID: " << id
             << "\nName: " << name
             << "\nSalary: " << salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee *emp = new Employee[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        emp[i].accept();
    }

    cout << "\nEmployee Details\n";

    for (int i = 0; i < n; i++)
        emp[i].display();

    delete[] emp;
    emp = nullptr;

    return 0;
}