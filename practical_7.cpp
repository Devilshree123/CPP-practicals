#include<iostream>
using namespace std;
class student
{
    int id;
    public:
        void getdata()
        {
            cin>>id;
        }
        void printdata()
        {
            cout<<"The id of student is "<<id<<endl;
        }
};
int main()
{
    student X[10];
    cout<<"Enter the id of students "<<endl;

    for (int i = 0; i <=10; i++)
    {
        X[i].getdata();   
    }
    for (int i = 0; i <=10; i++)
    {
        
        X[i].printdata();
    }
    return 0;
}