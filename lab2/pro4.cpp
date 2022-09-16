//Write C++ program to find the sum of positive numbers,
// if the user enters a negative numbers, break ends the loop
// the negative number entered is not added to sum.


#include <iostream>
using namespace std;

int main(){
    int sum=0,number,i=1;
    while(1){
        cout<<"Enter your "<<i<<" number : ";
        cin>>number;
        if(number>=0){
            sum+=number;
            cout<<"\nSum :"<<sum<<endl;

        }
        else{
            cout<<"\nNegitive number\n";
            break;
        }
        i++;
    }
    return 0;
}