//Write a program to calculate positive numbers till 50 only
//if the user enters a negative number, that number is skipped 
//from the calculation. (negativenumber -> loop terminate , 
//numbers above 50 -> skip iteration)


#include <iostream>
using namespace std;

int main(){
    int sum=0,number,i=1;
    while(1){
        cout<<"Enter your "<<i<<" number : ";
        cin>>number;
        if(number>=0){
            if(number<=50){
                sum+=number;
                cout<<"\nSum :"<<sum<<endl;
            }
            else{
                cout<<"\nAbove 50\n";
            }

        }
        else{
            cout<<"\nNegitive number\n";
            break;
        }
    }
    return 0;
}