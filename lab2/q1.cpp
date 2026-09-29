#include <iostream>
using namespace std;

class student{

    private:
    int roll;
    string name;
    int marks;

    public:

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

