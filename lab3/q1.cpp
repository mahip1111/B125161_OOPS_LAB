#include <iostream>
using namespace std;

int main() {

    int *ptr = new int ;
    cout<<"Enter the value of integer";
    cin>> *ptr;
    cout<<"The enter value is:"<< *ptr;
    delete ptr;
    return 0;
}