#include <iostream>
using namespace std;

class InternalExam {
public:
    void display() const {
        cout << "Internal Exam Marks: 40/50\n";
    }
};

class ExternalExam {
public:
    void display() const {
        cout << "External Exam Marks: 42/50\n";
    }
};

class FinalResult : public InternalExam, public ExternalExam {
public:
    void showResult() const {
        InternalExam::display();
        ExternalExam::display();
    }
};

int main() {
    FinalResult result;

    // display() is ambiguous without the scope resolution operator.
    result.showResult();

    return 0;
}
