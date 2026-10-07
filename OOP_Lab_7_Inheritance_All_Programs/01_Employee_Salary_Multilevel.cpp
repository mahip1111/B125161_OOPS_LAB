#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    double basicSalary;

public:
    Employee(string n, double salary) : name(n), basicSalary(salary) {}
};

class Developer : public Employee {
protected:
    int experience;

public:
    Developer(string n, double salary, int exp)
        : Employee(n, salary), experience(exp) {}

    double experienceBonus() const {
        return 0.05 * basicSalary * experience;
    }
};

class SeniorDeveloper : public Developer {
private:
    double projectBonus;

public:
    SeniorDeveloper(string n, double salary, int exp, double bonus)
        : Developer(n, salary, exp), projectBonus(bonus) {}

    void display() const {
        double expBonus = experienceBonus();
        double finalSalary = basicSalary + expBonus + projectBonus;

        cout << "Name: " << name << '\n';
        cout << "Basic Salary: " << basicSalary << '\n';
        cout << "Experience Bonus: " << expBonus << '\n';
        cout << "Project Bonus: " << projectBonus << '\n';
        cout << "Final Salary: " << finalSalary << '\n';
    }
};

int main() {
    SeniorDeveloper s("Manav", 50000, 3, 10000);
    s.display();
    return 0;
}
