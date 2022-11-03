//Write a program to demonstrate the use of special functions, constructor and destructor in
//the class template. The program is used to find the biggest of two entered numbers.

#include <iostream>
using namespace std;

template <class T>
class Compare{
    public:
        T a;
        T b;
        Compare(){
            a=0;b=0;
        }
        Compare(T c,T d){
            a=c;b=d;
        }
        T cal(){
            T c;
            c=(a>b)? a: b;
            return c;
        }
};
int main(){
    int c,b;
    cin>>b>>c;
    Compare<int>o1(b,c);
        a=o1.cal();
        cout<<a;
}
