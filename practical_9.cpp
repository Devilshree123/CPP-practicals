#include<iostream>
using namespace std;
class sum
{
    int a = 10,b = 20;
    public:
        inline void add()
        {
            cout<<a+b;
        }
};

int main()
{
    sum shreyas;
    shreyas.add();    
    return 0;
}