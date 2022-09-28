//Write a C++ Program to check Palindrome using function and operator overloading
#include <iostream>
using namespace std;

class Palindrome{
    public:
        string s1;

        Palindrome(){
            s1="";
        }
        Palindrome(string n){
            s1=n;
        }
        void operator == (Palindrome &o2){
            if(s1==o2.s1){
                cout<<"Palindrome";
            }
            else{
                cout<<"Not a Palindrome";
            }

        }
};
int main(){
    string s1="AMMA";
    Palindrome o1(s1);
    string s2=s1;
    reverse(s2.begin(),s2.end());
    Palindrome o2(s2);

    o1==o2;
    return 0;
}