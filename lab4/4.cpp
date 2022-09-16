// Write a C++ Program to calculate Volume of Cube using parameterized constructor
// and destructor.

#include <iostream>
using namespace std;



class Cube{
    public:
        Cube(int a){
            cout<<(a*a)*a;
        }
};

int main(){
    int a;
    cin>>a;
    Cube c1(a);
}