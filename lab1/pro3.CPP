//Write a function take three numbers from user then output the minimum number.
#include <iostream>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
cout<<min(a,min(b,c));
}