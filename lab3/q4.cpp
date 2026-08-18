#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the size of the array:";
    int n;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the elements of the array";
    int sum=0;
    for(int i=0;i<n;i++){
        cin>> arr[i];
        sum+=arr[i];
    }
    int avg = (float)sum/n;   // see if here you want ki avg float ho toh float data type sa kuch nahi hoga tumha sum ya n ma sa kisi ek ko float banana hoga
    cout<<"The sum of all the elements of the array is:"<<sum<<endl;
    cout<<"The avg of all the elements of the array is:"<<avg;
    delete []arr;
    return 0;
}