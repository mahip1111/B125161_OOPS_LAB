#include <iostream>
using namespace std;

class BankAccount{
    public:
    int accno;
    int accHolder;
    int balance;
    int withdraw;

    void read(){
        cout<<"Enter the account number:";
        cin>>accno;
        cout<<"Enter the account Holder";
        cin>>accHolder;
        cout<<"Enter the Balance";
        cin>>balance;
    }
    void deposit(){
        int deposit;
        cout<<"Enter the money you want to deposit:";
        cin>> deposit;
        balance +=deposit;
    }

    void withdraw(){
        int withdraw;
        cout<<"Enter teh money you want to withdraw:";
        cin>>withdraw;
        balance -=withdraw;
    }

    void details(){
        cout<<"account number is:"<<accno;
        cout<<"account holder is:"<< accHolder;
        cout<<"acoount balance is"<< balance;
    }
}c1;

int main() {
    c1.read();
    c1.deposit();
    c1.withdraw();
    c1.details();
    return 0;
}