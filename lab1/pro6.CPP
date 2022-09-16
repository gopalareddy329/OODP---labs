//Write a C++ program to construct the following pattern, using a nested for loop.

#include <iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    for(int i=4;i>=0;i--){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}