#include <iostream>
#include <string>
using namespace std;

class Academic {
protected:
    double math, physics, programming;

public:
    Academic(double m, double p, double prog)
        : math(m), physics(p), programming(prog) {}
};

class Sports {
protected:
    double sportsMarks;

public:
    Sports(double s) : sportsMarks(s) {}
};

class StudentResult : public Academic, public Sports {
private:
    string name;

public:
    StudentResult(string n, double m, double p, double prog, double sports)
        : Academic(m, p, prog), Sports(sports), name(n) {}

    void display() const {
        double total = math + physics + programming + sportsMarks;
        double average = total / 4.0;

        cout << "Name: " << name << '\n';
        cout << "Academic Marks: " << math + physics + programming << '\n';
        cout << "Sports Marks: " << sportsMarks << '\n';
        cout << "Total: " << total << '\n';
        cout << "Average: " << average << '\n';
    }
};

int main() {
    StudentResult student("Rahul", 85, 80, 90, 88);
    student.display();
    return 0;
}
