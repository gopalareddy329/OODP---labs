//Write a C++ program to demonstrate example of hierarchical inheritance 
//to get square and cube of a number.

#include <iostream>
using namespace std;

class Base{
    public:
        int square,cube;
        Base(){
            cube=0;
            square=0;
        }
};

class Derived:public Base{ 
    public:
        void get(int num){
            square=num*num;
        }
        void print(){
            cout<<square;
        }
};
class Derived1:public Base{ 
    public:
        void get(int num){
            cube=num*num*num;
        }
        void print(){
            cout<<endl<<cube;
        }
};

int main(){
    Derived d1;
    Derived1 d2;
    d1.get(5);
    d1.print();
    d2.get(10);
    d2.print();
}