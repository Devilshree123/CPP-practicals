#include<iostream>
using namespace std;
class Base{
    public:
    virtual void func(){
        cout<<"Function of Base class .";
    }
};
class Derived : public Base {
    public:
    void func(){
        cout<<"Function of Derived class .";
    }
};

int main()
{
    Base *ptr;
    Derived d;
    ptr = &d;

    ptr->func();
    return 0;
}