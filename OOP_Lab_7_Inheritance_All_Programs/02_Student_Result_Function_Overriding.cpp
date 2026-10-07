#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;
    int marks[3];

public:
    Student(string n, int r, int m1, int m2, int m3)
        : name(n), rollNo(r) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    virtual void calculateResult() const {
        cout << "Student Result\n";
    }

    virtual ~Student() = default;
};

class RegularStudent : public Student {
public:
    RegularStudent(string n, int r, int m1, int m2, int m3)
        : Student(n, r, m1, m2, m3) {}

    void calculateResult() const override {
        int total = marks[0] + marks[1] + marks[2];
        cout << "Regular Student\n";
        cout << "Name: " << name << '\n';
        cout << "Roll No: " << rollNo << '\n';
        cout << "Total Marks: " << total << '\n';
    }
};

class ScholarshipStudent : public Student {
public:
    ScholarshipStudent(string n, int r, int m1, int m2, int m3)
        : Student(n, r, m1, m2, m3) {}

    void calculateResult() const override {
        int total = marks[0] + marks[1] + marks[2] + 5;
        cout << "Scholarship Student\n";
        cout << "Name: " << name << '\n';
        cout << "Roll No: " << rollNo << '\n';
        cout << "Total Marks including 5 bonus marks: " << total << '\n';
    }
};

int main() {
    RegularStudent regular("Aman", 101, 80, 75, 85);
    ScholarshipStudent scholar("Riya", 102, 82, 78, 88);

    regular.calculateResult();
    cout << '\n';
    scholar.calculateResult();

    return 0;
}
