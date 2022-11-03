//Write a program to illustrate how to define and declare a class template for reading two
//data items from the keyboard and to find their sum.
#include <iostream>
using namespace std;

template <class T>
class Sum{
    public:
        T a;
        T b;
        Sum(T c,T d){
            a=c;b=d;
        }
        T cal(){
            return a+b;
        }
};

int main(){
    Sum <int> o1(10,20);
    int a;
    a=o1.cal();
    cout<<a;
    return 0;
}