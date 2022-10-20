#include <iostream>
using namespace std;
class B;
class A{
    public:
        int number;
        friend void sum(A,B);
};

class B{
    public:
        int num2;
        friend void sum(A,B);
};

void sum(A a,B b){
    cout<<a.number+b.num2;
}

int main(){
    A a;
    a.number=10;
    B b;
    b.num2=20;
    sum(a,b);
    return 0;
}