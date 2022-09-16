//Write a C++ program to guess a number between 1 to 9. Note : User is prompted to enter a guess. 
//If the user guesses wrong then the prompt appears again until the guess is correct, on successful guess, user will get
//Well guessed!&quot; message, and the program will exit.

#include <iostream>
using namespace std;
int main(){
    int num,guess;
    num=rand() %9 +1;
    do{
        cout<<"Enter number : ";
        cin>>guess;
        if(guess>9){
            cout<<"Enter upto 9\n";
        }
        else if(guess==num){
            cout<<"\nWell guessed";
        }
        else{
            cout<<"\nWrong\n";
        }
    }while (num!=guess);
}