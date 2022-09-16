//Write a C++ program to print whether the given number is positive number or negative number.
#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    if(number>0){
        cout<<"\nPositive\n";
    }
    else if(number==0){
        cout<<"\nZero\n";
    }
    else{
        cout<<"\nNegitive\n";
    }
    return 0;
}