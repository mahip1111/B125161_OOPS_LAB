#include <iostream>
using namespace std;

class Product{
    int productId;
    string productname;
    int qavailable;
    int price_p_q;
    int selling;

    public:

    void input(){
        cout<<"Enter the productId";
        cin>>productId;
        cout<<"Enter the producnt name";
        cin>>productname;
        cout<<"Enter the quantiity available";
        cin>>qavailable;
        cout<<"Enter the price per quantity";
        cin>>price_p_q;
    }

    void pd(){
        cout<<"Product details are:";
        cout<<productId;
        cout<<productname;
        cout<<qavailable;
        cout<<price_p_q;
    }

    void quantity(){
        cout<<"Enter the selling products total";
        cin>>selling;
        qavailable-=selling;
    }

    void inventory_value(){
        cout<<"Total inventory value is:"<<qavailable*price_p_q;
    }

}p1;

int main() {
    p1.input();
    p1.pd();
    p1.quantity();
    p1.inventory_value();
    return 0;
}