//Write a C++ program that will display the calculator menu. Theprogram will prompt the user to choose the operation 
//choice (from 1 to Then it asks the user to input two integer vales for the calculation. See the sample below.


#include <iostream>
using namespace std;

int main(){
    int num1,num2,res,cho;
    cout<<"MENU 1)Add 2)Sub 3)Multi 4)Div 5)Mod\n";
    cout<<"Enter your choice : ";
    cin>>cho;
    cout<<"Enter your two numbers";
    cin>>num1>>num2;
    if(cho==1){
        cout<<"Addition";
        res=num1+num2;
        cout<<" Result : "<<res;
    }
    else if(cho==2){
        cout<<"Sub";
        res=num1-num2;
        cout<<" Result : "<<res;
    }
    else if(cho==3){
        cout<<"Multi";
        res=num1*num2;
        cout<<" Result : "<<res;
    }
    else if(cho==4){
        cout<<"Div";
        res=num1/num2;
        cout<<" Result : "<<res;
    }
    else if(cho==5){
        cout<<"Mod";
        res=num1%num2;
        cout<<" Result : "<<res;
    }
    else{
        cout<<"Choice invalid";
    }
}