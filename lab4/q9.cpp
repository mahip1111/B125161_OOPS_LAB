// Online Exam Result
// Create a class named Exam containing the following private data members:
// • Student Name
// • Subject
// • Marks
// • Maximum Marks
// Create a class named Result and declare it as a friend class of Exam.
// The Result class should:
// 1. Access the private members of Exam.
// 2. Calculate the percentage.
// 3. Display “Pass” if the percentage is 40% or above; otherwise display “Fail”.
// 4. Display the complete result.
// Hint: Percentage = Marks
// Maximum Marks × 100.

#include <iostream>
using namespace std;

class Exam {
private:
    string studentName;
    string subject;
    int marks;
    int maxMarks;

public:
    Exam(string name, string subj, int m, int max) {
        studentName = name;
        subject = subj;
        marks = m;
        maxMarks = max;
    }

    friend class Result;
};

class Result {
public:
    void displayResult(Exam e) {
        double percentage = (double)e.marks / e.maxMarks * 100;

        
        if (percentage >= 40)
        cout << "Status: Pass" << endl;
        else
        cout << "Status: Fail" << endl;
        
        cout << "Student Name: " << e.studentName << endl;
        cout << "Subject: " << e.subject << endl;
        cout << "Marks: " << e.marks << endl;
        cout << "Maximum Marks: " << e.maxMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Exam exam("Alice", "Mathematics", 80, 100);
    Result result;

    result.displayResult(exam);

    return 0;
}