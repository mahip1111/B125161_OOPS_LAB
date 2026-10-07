#include <iostream>
#include <string>
using namespace std;

class BankAccount {
protected:
    string accountNumber;
    double balance;

public:
    BankAccount(string acc, double bal)
        : accountNumber(acc), balance(bal) {}

    virtual void updateBalance() = 0;
    virtual void display() const {
        cout << "Account Number: " << accountNumber << '\n';
        cout << "Updated Balance: " << balance << '\n';
    }

    virtual ~BankAccount() = default;
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(string acc, double bal, double rate)
        : BankAccount(acc, bal), interestRate(rate) {}

    void updateBalance() override {
        balance += balance * interestRate / 100.0;
    }
};

class CurrentAccount : public BankAccount {
private:
    double minimumBalance;
    double maintenanceCharge;

public:
    CurrentAccount(string acc, double bal, double minBal, double charge)
        : BankAccount(acc, bal),
          minimumBalance(minBal),
          maintenanceCharge(charge) {}

    void updateBalance() override {
        if (balance < minimumBalance)
            balance -= maintenanceCharge;
    }
};

int main() {
    SavingsAccount savings("SA1001", 50000, 5);
    CurrentAccount current("CA1001", 8000, 10000, 500);

    savings.updateBalance();
    current.updateBalance();

    cout << "Savings Account\n";
    savings.display();

    cout << "\nCurrent Account\n";
    current.display();

    return 0;
}
