//C++ Program to Count Total Number of Notes Using If Else Statement.

#include <iostream>
using namespace std;

int main(){
    int number,i;
    int note1=0, note2=0, note5=0, note10=0, note20=0, note50=0, note100=0,note200=0, note500=0,note2000=0;
    cout<<"Enter the number : ";
    cin>>number;
    if(number>=2000){
        note2000 = number/2000;
        number -= note2000*2000;
    }
    if(number>=500){
        note500 = number/500;
        number -= note500*500;
    }
    if(number>=200){
        note200 = number/200;
        number -= note200*200;
    }
    if(number>=100){
        note100 = number/100;
        number -= note100*100;
    }
    if(number>=50){
        note50 = number/50;
        number -= note50*50;
    }
    if(number>=20){
        note20 = number/20;
        number -= note20*20;
    }
    if(number>=10){
        note10 = number/10;
        number -= note10*10;
    }
    if(number>=5){
        note5 = number/5;
        number -= note2000*5;
    }
    if(number>=2){
        note2 = number/2;
        number -= note2*2;
    }
    if(number>=1){
        note1 = number/1;
        number -= note1*1;
    }
    cout<<"2000 = "<<note2000<<endl;
    cout << "500 = " << note500 <<endl;
    cout << "200 = " << note200 <<endl;
    cout << "100 = " << note100 <<endl;
    cout << "50 = " << note50 <<endl;
    cout << "20 = " << note20 <<endl;
    cout << "10 = " << note10 <<endl;
    cout << "5 = " << note5 <<endl;
    cout << "2 = " << note2 <<endl;
    cout << "1 = " << note1 <<endl;
    return 0;
}