#include <iostream>
using namespace std;

class Student{
    public:
    int marks;
    int rollno;
    string name;

    void accept(){
        cout<<"Enter the details of the student\n";
        cout<<"Enter the marks";
        cin>>marks;
        cout<<"Enter the rollno";
        cin>>rollno;
        cout<<"Enter the name";
        cin>>name;
    }
    void display(){
        cout<<"The details you added are:"<<endl;
        cout<<"marks is:"<<marks<<" ";
        cout<<"name is:"<<name<<" ";
        cout<<"rollno is:"<<rollno;
    }
};

int main() {

    Student *s1 = new Student;
    
    // s1->accept();
    (*s1).accept();
    s1->display();

    delete s1;
 
    return 0;
}