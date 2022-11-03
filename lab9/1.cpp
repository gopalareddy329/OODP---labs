//Write a program to define the function template for calculating the square of given
//numbers with different data types.
#include <iostream>
using namespace std;

template<typename T,typename B>
void square(T a,B b){
    cout<<a*a<<endl;
    cout<<b*b;
}

int main(){
    square<int,float>(2,3.3);
    return 0;
}