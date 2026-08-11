#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the size of the array:";
    int n;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the elements of the array";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max)max=arr[i];
    }
    cout<<"The largest element is: "<<max;
    delete []arr;
    return 0;
}