// Write a C++ program to illustrate the concept of class and object creation. (Ask
// students to create a class, methods and invoke them inside main method).

#include <iostream>
using namespace std;
class data{
    public:
        int marks;
        
        void print(){
            cout<<marks;
        }
}; 
int main() {
    class data d1;
    d1.marks=30;
    d1.print();

    return 0;
}