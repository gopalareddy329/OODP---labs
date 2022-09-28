//Write a C++ class Program to perform rational number arithmetic using operator overloading.

#include <iostream>
using namespace std;

class Rational{
    public:
        int num;
        Rational(){
            num=0;
        }
        Rational(int n){
            num=n;
        }
        float operator /(Rational &o2){
            float m=(float) num/o2.num;
            return m;

        }
};

int main(){
    Rational o1(30),o2(7);
    float n=o1 / o2;
    cout<<n;
    return 0;
}