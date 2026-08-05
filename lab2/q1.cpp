#include <iostream>
using namespace std;

class student{

    public:
    int roll;
    string name;
    int marks;

    void input(){
        cout<<"Enter the roll number";
        cin>>roll;
        cout<<"Enter the name";
        cin>>name;
        cout<<"Enter teh marks";
        cin>>marks;
    }

    void output(){
        cout<<"Roll number is"<<roll<<endl;
        cout<<"Name is "<<name<<endl;
        cout<<"Marks is"<<marks<<endl;
    }
}s1;

int main() {
    s1.input();
    s1.output();
    return 0;
}

// just tell me agar muja methods ko use karna hai toh acess specifier use karna hi hoga kya nahi toh error show hoga kya