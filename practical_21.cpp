#include<iostream>
using namespace std;
class Base{
    public:
    void print(){
        cout<<"I am Base Class";
    }
};
class Derived : public Base{
    public:
    void print(){
        cout<<"I am Derived Class";
    }
};

int main()
{
    Base *b;
    Derived d;
    b = &d;

    b->print();
}