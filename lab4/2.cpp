// Write a program in C++ to print Floyd’s Triangle by using the constructor destructor

#include <iostream>
using namespace std;

class Trinagle{
    public:
        Trinagle(){
            int k=1;
            for(int i=1;i<=5;i++){
                for(int j=0;j<i;j++){
                    cout<<k<<" ";
                    k++;
                }
                cout<<endl;
            }
        }
};

int main(){
    Trinagle t1;
    return 0;
}

