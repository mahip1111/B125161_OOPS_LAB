#include <iostream>
using namespace std;

class rectangle{

    private:
    int length;
    int breadth;
    int area;
    int perimeter;

    public:

    void read(){
        cout<<"Enter the dimensions:"<<endl;
        cin>>length;
        cin>>breadth;
    }
    void area(){
        area = length* breadth;
    }

    void perimeter(){
        perimeter = 2*(length+breadth);
    }

    void display(){
        cout<<"Area of the reactangle is:"<<area;
        cout<<"Perimeter of the rectange is:"<<perimeter;
    }
}r1;

int main() {
    r1.read();
    r1.area();
    r1.perimeter();
    r1.display();
    return 0;
}