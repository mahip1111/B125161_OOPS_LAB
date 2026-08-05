#include <iostream>
#include <string>
using namespace std;

class LibraryBook {
private:
    int BookID;
    string BookTitle;
    string StudentName;
    int NumberOfDaysIssued;
    int Fine;

public:
    // Function to enter details
    void enterDetails() {
        cout << "Enter Book ID: ";
        cin >> BookID;

        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, BookTitle);

        cout << "Enter Student Name: ";
        getline(cin, StudentName);

        cout << "Enter Number of Days Book was Issued: ";
        cin >> NumberOfDaysIssued;
    }

    // Function to calculate fine
    void calculateFine() {
        if (NumberOfDaysIssued > 15) {
            Fine = (NumberOfDaysIssued - 15) * 2;
        } else {
            Fine = 0;
        }
    }

    // Function to display details
    void displayDetails() {
        cout << "\n------ Library Transaction Details ------" << endl;
        cout << "Book ID           : " << BookID << endl;
        cout << "Book Title        : " << BookTitle << endl;
        cout << "Student Name      : " << StudentName << endl;
        cout << "Days Issued       : " << NumberOfDaysIssued << endl;
        cout << "Fine              : Rs. " << Fine << endl;
    }
};

int main() {
    LibraryBook book;

    book.enterDetails();
    book.calculateFine();
    book.displayDetails();

    return 0;
}