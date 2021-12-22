#include <iostream>
using namespace std;

class A
{
public:
    void fun()
    {
        cout << "Single Inheritance";
    }
};

class B : public A
{
};

int main()
{
    B b;
    b.fun();
    return 0;
}