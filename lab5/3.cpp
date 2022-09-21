#include <iostream>
using namespace std;

class Area{
    public:

        void cal(int length,int breadth){
                cout<<"Area of rectangle is : "<<length*breadth;
        }
        void cal(int side){
            cout<<"\nArea of square is : "<<side*side;
        }
};

int main(){
    Area a1;
    a1.cal(3,4);
    a1.cal(3);
    return 0;
}