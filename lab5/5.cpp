// Write a C++ program to find Volume of Cube, Cylinder, Sphere using Function
// Overloading.

#include <iostream>
using namespace std;

class Compare{
    public:
        string name1;
        string name2;

        void cal(string n1,string n2){
                name1=n1;
                name2=n2;
        }
        void cal(){
            if(name1!=name2){
                cout<<"Not same \n";
                if(name1>name2){
                    cout<<"String 1 is greater than string 2";
                }
                else{
                    cout<<"String 2 is greater than string 1";
                }
            }
            else{
                cout<<"\nBoth are same";
            }
        }
};

int main(){
    Compare s1;
    s1.cal("Malli","Malli");
    s1.cal();
    return 0;
}