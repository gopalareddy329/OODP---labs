// Sample output

// Input: 5000
// 7
// 15000
// 7
// Output: 35000
// 105000

#include <iostream>
using namespace std;

class Room{
    public:
        int am,days,ar,day_r;
        Room(){
            cin>>am>>days>>ar>>day_r;
            cout<<(am*days)<<endl;
            cout<<(ar*day_r);
        }
};

int main(){
    Room r1;
    return 0;
}