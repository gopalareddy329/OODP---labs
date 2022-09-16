//Write a C++ program to check the validity of password input by users.

#include <iostream>
using namespace std;

int main(){
    string password;
    int u=0,l=0,n=0,s=0;
    cout<<"\nEnter the password : ";
    cin>>password;
    for(int i=0;i<=15;i++){
        if(password.length()<=15 && password.length()>=6){
            if(isupper(password[i])){
                u=1;
            }
            if(islower(password[i])){
                l=1;
            }
            if(isdigit(password[i])){
                n=1;
            }
            if(password[i]==64 || password[i]==35 || password[i]==36){
                s=1;
            }
        }
    }
    if(u==1 && l==1 && n==1 && s==1){
            cout<<"\nValid Password\n";
        }
    else{
            cout<<"\nNot a Valid Password\n";
    }
    return 0;
}