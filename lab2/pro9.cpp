//Write a program to create a Calculator using the switch Statement.
#include <iostream>
using namespace std;

int main(){
    int num1,num2,cho;
    cout<<"Enter your two numbers : ";
    cin>>num1>>num2;
    cout<<"\n1) Add 2) Sub 3) Multi 4) Div 5) Mod\n Enter your choice : ";
    cin>>cho;
    switch(cho){
        case 1 :
            cout<<"Addition : "<<num1+num2;
            break;
        case 2:
            cout<<"Sub : "<<num1-num2;
            break;
        case 3:
            cout<<"Multi : "<<num1*num2;
            break;
        case 4:
            cout<<"Div : "<<num1/num2;
            break;
        case 5:
            cout<<"Mod : "<<num1%num2;
            break;

    }
}