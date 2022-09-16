// Write a C++ class which has two funtions get_Str and print_Str. get_Str accept a string
// from the user and print_Str print the string in upper case and lower case.

#include <iostream>
using namespace std;
class str{
    public:
        char stri[20];
        void get_Str(){
            cin>>stri;
        }
        void print_Str(){
            cout<<endl<<stri;
        }
}; 
int main() {
    class str s1;
    s1.get_Str();
    s1.print_Str();

    return 0;
}