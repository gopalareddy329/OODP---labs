#include <iostream>
using namespace std;

class Palindrome{
    public:
    string name;
    void check(string temp){
        name=temp;
    }
    void check(){
        int length=name.length();
        string temp=name;
        for (int i = 0; i < length / 2; i++) swap(name[i], name[length - i - 1]);

        if(name==temp) cout<<"Palindrome";
        else cout<<"Not a Palindrome";
        }
};

int main(){
    string name;
    cin>>name;
    Palindrome p1;
    p1.check(name);
    p1.check();
    return 0;
}