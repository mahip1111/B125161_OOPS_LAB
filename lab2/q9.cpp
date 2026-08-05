#include <iostream>
using namespace std;

class StudentResult{
    string Student_name;
    int roll;
    int arr[5];
    int marks;
    int percentage;

    public:
    void input(){
        cout<<"Enter student name";
        cin>>Student_name;
        cout<<"Enter the roll number";
        cin>>roll;
        cout<<"Enter the marks in the 5 subjects";
        for(int i=0;i<5;i++){
            cin>>arr[i];
        }
    }

    void total(){
        for(int i=0;i<5;i++){
            marks+=arr[i];
        }
        percentage=marks/100;
    }

    void grade(){
        if(percentage>=90){
            cout<<"Grade is A";
        }
        if(percentage>=80 && percentage<90) cout<<"Grade is B";
        if(percentage>=70 && percentage<80) cout<<"Grade is  C";
        if(percentage>=60 && percentage<70) cout<<"Grade is D";
        else cout<< "Grade is F";
    }
}s1;

int main() {
    s1.input();
    s1.total();
    s1.grade();
    return 0;
}