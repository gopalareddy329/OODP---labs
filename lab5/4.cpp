//Write a C++ Program to check Palindrome using function overloading.

#include <iostream>
using namespace std;

class Volume{
    public:

        void cal(int s){
            cout<<"Volume of cube : "<<s*s*s;
        }
        void cal(int r,int h){
            cout<<"\nVolume of cylinder : "<<3.14*(r*r)*h;
        }
        void cal(float n,float pi,int r){
            cout<<"\nVolume of sphere : "<<n*(pi)*(r*r*r);
        }
};

int main(){
    Volume b1;
    b1.cal(3);
    b1.cal(3,4);
    b1.cal(1.33,3.14,7);
    return 0;
}