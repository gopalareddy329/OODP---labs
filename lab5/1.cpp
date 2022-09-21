#include <iostream>
using namespace std;

class Student{
    public:
        Student(){
            cout<<"Unknow\n";
        }
        Student(string name){
            cout<<"Student name is "<<name;
        }
};

int main(){
    Student s1;
    Student s2("Gopala");
    return 0;
}