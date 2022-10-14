//Write a C++ Program to show access to Private Public and Protected using Inheritance.

#include <iostream>
using namespace std;

class Base{
    public:
        string name,classrn;
        int roll;
        Base(){
            name="";
            classrn="";
            roll=0;
        }
};

class Studentname: public Base{
    public:
        void get(string temp){
            name=temp;
        }
        void print(){
            cout<<name;
        }
};

class Studentclass: private Base{
    public:
        void get(string temp){
            classrn=temp;
        }
        void print(){
            cout<< endl <<classrn;
        }
};

class Studentroll: protected Base{
    public:
        void get(int temp){
            roll=temp;
        }
        void print(){
            cout<<endl<<roll;
        }
};


int main(){
    Studentname s1;
    Studentclass s2;
    Studentroll s3;
    s1.get("gopala");
    s1.print();
    
    s2.get("D2");
    s2.print();

    s3.get(188);
    s3.print();
}