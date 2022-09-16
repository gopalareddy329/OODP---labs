//Write a C++ program to find numbers between 100 and 400 (bothincluded) where each digit of a number is an even number.
//The numbers obtained should be printed in a comma-separated sequence.

#include <iostream>
using namespace std;

int main(){
    for(int i=100;i<=400;i++){
        if(i%2  ==0){
            cout<<i<<", ";
        }
    }

    return 0;
}