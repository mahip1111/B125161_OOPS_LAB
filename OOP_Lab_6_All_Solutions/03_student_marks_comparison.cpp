#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int totalMarks;

public:
    Student(string n, int marks) {
        name = n;
        totalMarks = marks;
    }

    bool operator>(const Student& s) {
        return totalMarks > s.totalMarks;
    }

    string getName() {
        return name;
    }

    int getMarks() {
        return totalMarks;
    }
};

int main() {
    Student s1("Rahul", 450);
    Student s2("Aman", 430);

    if (s1 > s2)
        cout << s1.getName() << " has higher marks.\n";
    else
        cout << s2.getName() << " has higher marks.\n";

    return 0;
}
