#include<iostream>
using namespace std;

class Base1{
    public:
    Base1(){
        cout<<"Base1 constructor is called "<<endl;
    }
};
class Base2{
    public:
    Base2(){
        cout<<"Base2 constructor is called "<<endl;
    }
};
class Derived : public Base1 , public Base2{
    public:
    Derived(){
        cout<<"Derived constructor is called "<<endl;
    }
};
int main()
{
    Derived d;
    return 0;
}