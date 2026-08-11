#include <iostream>
using namespace std;

int main() {

    cout<<"Enter the size of array:";
    int n;
    cin>>n;
    int *arr= new int[n];

    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    cout<<"Entered elements are:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    delete []arr;
 
    return 0;
}