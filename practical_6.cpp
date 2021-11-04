#include<iostream>
using namespace std;
class student
{
    int id;
    public:
        void enter()
        {
            cout<<"Enter your id : ";
            cin>>id;
        }
        void print()
        {
            cout<<"Your id is "<<id;
        }
};
int main()
{
    student shreyas;
    shreyas.enter();
    shreyas.print();
    return 0;
}