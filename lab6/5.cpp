//Write a C++ program to find volume of cube, cylinder, and sphere by function and operator overloading

#include <iostream>
using namespace std;

class Volume{
    public:
    int s,r,h,n,pi,k;
        void cal(int num){
            s=num;
        }
         void cal(int num1,int num2){
            r=num1;
            h=num2;
         }
         void cal(float num,float num2,int num3){
            n=num;
            pi=num2;
            k=num3;
         }
        void operator * (){
             cout<<"Volume of cube : "<<s*s*s;
        }
        void operator - (){
            cout<<"\nVolume of cylinder : "<<3.14*(r*r)*h;
        }
         void operator + (){
            cout<<"\nVolume of sphere : "<<n*(pi)*(k*k*k);
         }

};

int main(){
    Volume b1;
    b1.cal(3);
    b1.cal(3,4);
    b1.cal(1.33,3.14,7);

    * b1;
    - b1;
    + b1;

}