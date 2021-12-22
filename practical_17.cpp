#include<iostream>
using namespace std;

class A{
    public:
    void funcA(){
        cout<<"func of A"<<endl;
    }
};
class B : public A{
    public:
    void funcB(){
        cout<<"func of B";
    }
};
class C : public B{
    
};
int main()
{
    C c;
    c.funcA();
    c.funcB();
    return 0;
}