#include <iostream>
using namespace std;

class distance
{
    int feet;
    int inches;
    int total;

    public:
    void input(){
        cout<<"Enter distance in feet:";
        cin>>feet;
        cout<<"Enter distance in inches:";
        cin>>inches;
    }

    void sum(){
        total=feet/12 + inches;
    }

    void details(){
        cout<<"Final distance is:"<<total;
    }
}d1;

int main()
{
    d1.input();
    d1.sum();
    d1.details();
    return 0;
}