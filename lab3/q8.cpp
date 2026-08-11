#include <iostream>
#include <string>
using namespace std;

class Student {
    int roll;
    string name;
    int subjects;
    int *marks;

public:
    void accept() {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Number of Subjects: ";
        cin >> subjects;

        marks = new int[subjects];

        cout << "Enter Marks:\n";
        for (int i = 0; i < subjects; i++) {
            cin >> marks[i];
        }
    }

    void display() {
        int total = 0;

        for (int i = 0; i < subjects; i++)
            total += marks[i];

        float average = (float)total / subjects;

        cout << "\nStudent Details\n";
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
    }

    ~Student() {
        delete[] marks;
    }
};

int main() {
    Student s;
    s.accept();
    s.display();

    return 0;
}