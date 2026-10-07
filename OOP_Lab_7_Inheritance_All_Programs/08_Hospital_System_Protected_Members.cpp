#include <iostream>
#include <string>
using namespace std;

class Patient {
protected:
    string patientName;
    string patientID;
    int age;

public:
    Patient(string name, string id, int a)
        : patientName(name), patientID(id), age(a) {}
};

class InPatient : public Patient {
private:
    double roomCharges;
    int numberOfDays;

public:
    InPatient(string name, string id, int a, double charges, int days)
        : Patient(name, id, a),
          roomCharges(charges),
          numberOfDays(days) {}

    void displayBill() const {
        double totalBill = roomCharges * numberOfDays;

        cout << "Patient Name: " << patientName << '\n';
        cout << "Patient ID: " << patientID << '\n';
        cout << "Age: " << age << '\n';
        cout << "Room Charges per Day: " << roomCharges << '\n';
        cout << "Number of Days: " << numberOfDays << '\n';
        cout << "Total Hospital Bill: " << totalBill << '\n';
    }
};

int main() {
    InPatient patient("Amit", "P1001", 35, 2500, 4);
    patient.displayBill();
    return 0;
}
