// Write a C++ program to define a class Date that holds day, month and year as data
// members. Also write necessary member methods to
// a) Read a date
// b) Print a date in different formats
// c) Find the date exactly one week after the given date. e.g. If the given date is 30-10-
// 2013, then the resultant date is 6-11-2013.


#include <iostream>
using namespace std;

class Date{
    public:
        int day;
        int month;
        int year;
        
        void getdata(){
            cin>>day>>month>>year;
        }
        void print(){
            cout<<endl<<day<<"/"<<month<<"/"<<year;
        }
        void cal(){
            day=day+7;
            if(month%2==0){
                if(month==2){
                    if(day>28){
                        day-=28;
                        month++;
                    }
                }
                else{
                    if(day>31){
                        day-=31;
                        month++;
                    }
                }
                if(month==12){
                    year++;
                }
                
                }
            else{
                if(day>30){
                    day=-30;
                    month++;
                }
            }
            print();
        }
                
            };

int main() {
   class Date d1;
   d1.getdata();
   d1.print();
   d1.cal();

    return 0;
}