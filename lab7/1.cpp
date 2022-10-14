//1 2 3 8
//Write a C++ program to read and print students information using two 
//classes and simple inheritance.
#include <iostream>
using namespace std;

class Base{
    public:
        string name;
        Base(){
            name="";
        }
};

class Student: public Base{
    public:
        void get(string temp){
            name=temp;
        }
        void print(){
            cout<<name;
        }
};

int main(){
    Student s1;
    s1.get("gopala");
    s1.print();
}