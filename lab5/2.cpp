#include <iostream>
using namespace std;


class AddAmount{
    public:
        
        AddAmount(){
            cout<<"No amount added\n";
        }
        AddAmount(int add){
            int amount=50;
            amount+=add;
            cout<<amount-add<<"+"<<add<<"="<<amount;
        }
};

int main(){
    AddAmount a1;
    AddAmount a2(20);
    return 0;
}