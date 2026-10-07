#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int employeeID;
    string name;

public:
    Employee(int id, string n)
        : employeeID(id), name(n) {}
};

class Developer : virtual public Employee {
protected:
    string programmingLanguage;

public:
    Developer(int id, string n, string language)
        : Employee(id, n), programmingLanguage(language) {}
};

class Tester : virtual public Employee {
protected:
    string testingTool;

public:
    Tester(int id, string n, string tool)
        : Employee(id, n), testingTool(tool) {}
};

class TechLead : public Developer, public Tester {
public:
    TechLead(int id, string n, string language, string tool)
        : Employee(id, n),
          Developer(id, n, language),
          Tester(id, n, tool) {}

    void display() const {
        cout << "Employee ID: " << employeeID << '\n';
        cout << "Name: " << name << '\n';
        cout << "Programming Language: " << programmingLanguage << '\n';
        cout << "Testing Tool: " << testingTool << '\n';
    }
};

int main() {
    TechLead lead(501, "Arjun", "C++", "Selenium");
    lead.display();

    return 0;
}
