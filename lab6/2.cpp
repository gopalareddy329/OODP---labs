//Write a C++ program for show Counter using Overloading unary operator ++.

#include <iostream>
using namespace std;

class Count{
    public:
        int counter;
        Count(){
            counter=0;
        }
        void give(){
            cout<<"\nValue is : "<<counter;
        }
        void operator++(){
            counter++;
        }
};

int main(){
    Count c1,c2;
    ++c1;
    cout<<"\n C1 :";
    c1.give();

    ++c2;
    ++c2;
    cout<<"\n C2 :";
    c2.give();

    return 0;

}