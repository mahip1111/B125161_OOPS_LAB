// Student ID Search Auniversity receives a variable number of student IDs. Write a program that: 1. Dynamically allocates memory for n student IDs. 2. Accepts all student IDs. 3. Searches for a particular ID using pointer traversal. 4. Displays whether the ID is found and its position. 5. Properly deallocates the memory. Condition: Do not use array indexing while searching

#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the number of students";
    cin>>n;
    
    int *student= new int [n];

    cout<<"Enter the id of all the students:";
    for(int i=0;i<n;i++){
        cin>>student[i];
    }

    cout<<"Enter the id you want to seach";
    int search;
    cin>>search;
    int *ptr=student;
    int flag =1;
    for(int i=0;i<n;i++){
        if(*ptr==search){
        cout<<"Id found at index: "<<i<<endl;
        flag =0;
        }
        ptr++;
    }
    if(flag==1)
    cout<<"id not found";

    delete[] student;
    return 0;
}