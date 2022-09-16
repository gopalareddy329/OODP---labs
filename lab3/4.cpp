//Define a class named Circle which can be constructed by a radius.

#include <iostream>
using namespace std;
class Circle{
    public:
        int radius;
        void getdata(){
            cin>>radius;
        }
        void cal(){
            cout<<"\narea : "<<(2*(radius*radius));
        }
}; 
int main() {
    class Circle c1;
    c1.getdata();
    c1.cal();

    return 0;
}