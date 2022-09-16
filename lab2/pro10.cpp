//Write a program to calculate the average of numbers entered by the user.
// If the user enters a negative number, it ignores the number 
//and calculates the average number entered before it (Use Go to statement)


#include <iostream>
using namespace std;

int main(){
    int sum=0,number,i=1,avg=0;
    while(1){
        cout<<"Enter your "<<i<<" number : ";
        cin>>number;
        if(number>=0){
            sum+=number;
        }
        else if(number<0){
            cout<<"\nNegitive number\n";
            break;
        }
        i++;
    }
    goto avag;
    avag:
        avg=sum/(i-1);
        cout << "\nAverage = " << avg;
    return 0;
}