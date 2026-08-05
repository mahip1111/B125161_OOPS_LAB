#include <iostream>
using namespace std;

class Bill_generator{
    int consumer_no;
    int units;
    string consuemer_name;
    float total;

    public:

    void input(){
    cout<<"Enter teh consumer_no";
    cin>>consumer_no;
    cout<<"Enter the units consumed";
    cin>>units;
    cout<<"Enter the consumer name:";
    cin>>consuemer_name;
    }

    void bill_calculate(){
        if(units<100) total= 5*units;
        else if(units>100 && units<200) total = 5*100 + 7*(units-100);
        else total = 5*100 + 7*100 + 10*(units-200);
    }

    void details(){
        cout<<"Details of the consumer are:\n";
        cout<<consuemer_name<<endl;
        cout<<consumer_no<<endl;
        cout<<total<<endl;
        cout<<units<<endl;
    }
}b1;
int main() {
    b1.input();
    b1.bill_calculate();
    b1.details();
    return 0;
}

// note: by default all the things are private methods and state both