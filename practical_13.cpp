#include<iostream>
using namespace std;
class sum
{
    int a,b;
    float c,d;
    public:
        sum(int a, int b)
        {
            cout<<a+b<<endl;
        }
        sum(double c, double d)
        {
            cout<<c+d<<endl;
        }
        ~sum()
        {
            cout<<"The addition is done";
        };
};
int main()
{
    sum shreyas(2.5,3.5);
    
    return 0;
}