#include <iostream>
using namespace std;

class employee{
    int empid;
    string empname;
    float salary;
    float hra;
    float da;
    float gross_salary;

    public:
    void input(){
        cout<<"Enter the employee id";
        cin>>empid;
        cout<<"Enter the employee name";
        cin>>empname;
        cout<<"Enter the employee salary";
        cin>>salary;
    }

    void calculate(){
        hra=salary/5;
        da=salary/10;
        gross_salary=salary + hra + da;
    }

    void salary_details(){
        cout<<"salary of the employee is:"<<salary;
        cout<<"hra of the employee is:"<<hra;
        cout<<"da of the employee is:"<<da;
        cout<<"gross salary of the employee is:"<<gross_salary;
    }
    
}emp1;
int main() {
    emp1.input();
    emp1.calculate();
    emp1.salary_details();
    return 0;
}