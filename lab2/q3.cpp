#include <iostream>
using namespace std;

class calculator{
    int n1;
    int n2;
    public:
    void read(){
        cout<<"Enter the two numbers on which you want to execute the operations:";
        cin>>n1;
        cin>>n2;
    }
    void addition(){
        cout<<"Sum is:"<<n1+n2;
    }
    void multiplication(){
        cout << "multiplication result is:"<<n1*n2;
    }
    void subtraction(){
        cout<< "subtraction result is:"<<n1-n2;
    }
    void division(){
        cout<<"division result is:"<<n1/n2;
    }
}o1;
int main() {
    o1.addition();
    o1.multiplication();
    o1.subtraction();
    o1.division();
    return 0;
}