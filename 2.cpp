//Write a C++ program to read and print employee information using multiple inheritance.

#include <iostream>
using namespace std;

class Base{
    public:
        int age;
        string name;
        Base(){
            age=0;
            name="";
        }
};
class Abase{
    public:
        float salary;
        Abase(){
            salary=0;
        }
};
class Salary:public Base,public Abase{
    public:
        void get(float s,int a,string n){
            salary=s;
            age=a;
            name=n;
        }
        void print(){
            cout<<"\nName : "<<name<<"\n Age : "<<age;
            cout<<"\nSalary : "<<salary;
        }
};

int main(){
    Base o1;
    Abase o2;
    Salary i1;
    i1.get(2000,29,"Gopala");
    i1.print();
    Salary s1;

}