#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n) : name(n) {
        cout << "Person constructor\n";
    }
};

class Employee : public Person {
protected:
    string employeeID;

public:
    Employee(string n, string id)
        : Person(n), employeeID(id) {
        cout << "Employee constructor\n";
    }
};

class Manager : public Employee {
private:
    double salary;

public:
    Manager(string n, string id, double s)
        : Employee(n, id), salary(s) {
        cout << "Manager constructor\n";
    }

    void display() const {
        cout << "\nInitialized Information\n";
        cout << "Name: " << name << '\n';
        cout << "Employee ID: " << employeeID << '\n';
        cout << "Salary: " << salary << '\n';
    }
};

int main() {
    Manager manager("Vikash", "MGR101", 75000);
    manager.display();

    return 0;
}
