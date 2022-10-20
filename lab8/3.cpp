#include <iostream>
using namespace std;

class Polygon{
    public:
        float r;
        virtual void area() = 0;
};

class triangle:public Polygon{
    public:
        float b,h;
        void get(){
            cin>>b>>h;
            
        }
        void area(){
            r=(0.5)*b*h;
            cout<<r;
        }
};

class rectangle:public Polygon{
    public:
        float l,b;
        void get(){
            cin>>l>>b;
            
        }
        void area(){
            r=l*b;
            cout<<endl<<r;
        }
};

int main(){
    Polygon *p;
    triangle t;
    rectangle r;

    t.get();
    r.get();
    p=&t;
    p->area();
    p=&r;
    p->area();
}