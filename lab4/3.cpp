// Write C++ Program to display the cube of the number upto a given integer using
// Destructor.
// Sample Output
// Please enter the number:
// 4
// cube of 1 is: 1
// cube of 2 is: 8
// cube of 3 is: 27
// cube of 4 is: 64

#include <iostream>
using namespace std;

class Cube{
    public:
        ~Cube(){
            int n;
            cin>>n;
            for(int i=1;i<=n;i++){
                cout<<"cude of "<<i<<" is "<<(i*i)*i<<endl;
            }
        }
};

int main(){
    Cube b1;
    return 0;
}