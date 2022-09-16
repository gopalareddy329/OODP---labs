//Write a program to checks whether a year (integer) entered by the user 
//is a leap year or not. Using if...else Ladder
 

#include <iostream>
using namespace std;

int main(){
    int year;
    cout<<"\nEnter the year : ";
    cin>>year;
    if(year%400==0 || year % 4 ==0){
        cout<<"\n Is a leap year\n";
    }
    else if(year % 100 ==0){
        cout<<"\n Is not a leap year\n";
    }
    else{
        cout<<"\nIs not a leap year\n";
    }
    return 0;
}