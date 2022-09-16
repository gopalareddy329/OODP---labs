//Write C++ program to find if an integer is positive, negative or zero using nested if statements

#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    if(number>=0){
        if(number==0){
            cout<<"\nZero\n";
        }
        else{
            cout<<"\nPositive\n";
        }
    }
    else{
        cout<<"\nNegitive\n";
    }
    return 0;
}