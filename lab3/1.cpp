// Create a class named Student with a string variable name and an integer variable
// roll_no Assign the value of roll_no as 2 and that of name as John by creating an
// object of the class Student.
#include <iostream>
using namespace std;
class Student{
    public:
        char name[20];
        int roll_no;
};
int main() {
    class Student s1;
    cout<<"Enter student name : ";
    cin>>s1.name;
    cout<<"\nEnter roll number : ";
    cin>>s1.roll_no;
    cout<<endl<<"Name : "<<s1.name<<endl<<"Roll no : "<<s1.roll_no;
    return 0;
}