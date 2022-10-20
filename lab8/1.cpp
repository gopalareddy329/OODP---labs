#include <iostream>
using namespace std;

class Person{
    public:
        string name;
        int age;

        virtual void display(){
            cout<<"\nBase";
        }
};

class Student:public Person{
    public:
    int marks[20],sum=0;
    int size,cru_id,i;
        void get(){
            cout<<"\nStudent Name : ";
            cin>>name;
            cout<<"\nStudent Age :";
            cin>>age;
            cout<<"\nStudent Subjects :";
            cin>>size;
            for(i=0;i<size;i++){
            cout<<"\nStudent :"<<"Subject Marks :";
            cin>>marks[i];
            sum+=marks[i];
            }
            cout<<"\nStudent Cru_id : ";
            cin>>cru_id;
        
        }
        void display(){
            cout<<"\nStudent Name : "<<name<<"\nStudent Age :"<<age;
            cout<<"\nStudent Cru_id : "<<cru_id;
            cout<<"\nMarks : "<<sum;
        }
};

class Professor:public Person{
    public:
    string public_p,cru_id;
        void get(){

            cout<<"\nProfessor Name : ";
            cin>>name;
            cout<<"\nProfessor Age :";
            cin>>age;
            cout<<"\nProfessor Publication : ";
            cin>>public_p;
            cout<<"\nProfessor Cru_id : ";
            cin>>cru_id;

        }
        void display(){
            cout<<"\n\n\nProfessor : ";
            cout<<"\nProfessor Name : "<<name<<"\nProfessor Age :"<<age<<"\nPublication : "<<public_p<<"\nCru_id : "<<cru_id;
        }
};

int main(){
    Person *b;
    Professor p;
    Student s;
    s.get();
    p.get();
    b=&s;
    b->display();
    b=&p;
    b->display();
    return 0;
}