// Write a program in C++ to convert a decimal number into binary without using an
// array and using the constructor and destructor.
// Sample Output
// Please enter Decimal number: 8
// binary number = 1000

#include <iostream>
using namespace std;

class Binary{
    public:
        Binary(){
            int n,i=0;
            cin>>n;
            int arr[10];
            for(i=0; n>0; i++)    
            {    
            arr[i]=n%2;    
            n= n/2;  
            }   
            for(int j=i-1;j>=0;j--){
                cout<<arr[j];
            }
        }
};

int main(){
    Binary b1;
    return 0;
}