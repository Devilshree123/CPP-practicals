#include<iostream>
using namespace std;
class sum
{
    int a,b;
    public:
        void getnumber()
        {
            cout<<"Enter the two numbers "<<endl;
            cin>>a>>b;
        }
        friend int add();
};

int add()
{
    sum s;
    int temp;
    s.getnumber();
    temp = s.a + s.b;
    return temp;
}

int main()
{
    int result ;
    result = add();
    cout<<result;
    return 0;
}