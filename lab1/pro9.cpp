//Write a C++ program to construct the following pattern, using a nested loop number.

#include <iostream>
using namespace std;

int main(){
    for(int i=9;i>=0;i--){
        for(int j=0;j<i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}