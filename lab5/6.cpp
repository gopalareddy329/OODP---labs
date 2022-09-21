// Create a class to print the area of a square and a rectangle. The class has two
// functions with the same name but different number of parameters. The function for
// printing the area of rectangle has two parameters which are its length and breadth
// respectively while the other function for printing the area of square has one
// parameter which is the side of the square.

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