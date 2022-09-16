//Write a C++ program that accepts a string and calculate the number of digits and letters.
#include <iostream>
using namespace std;
int main(){
    string s;
    int num=0,cha=0;
    cin>>s;
    for(int i=s.length()-1;i>=0;i--){
        
        if(isalpha(s[i])){
            cha++;
        }
        else if(isdigit(s[i])){
            num++;
        }
    }
    cout<<"Digits is : "<<num<<"\nLetter : "<<cha;
}