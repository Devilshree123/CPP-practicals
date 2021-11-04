#include<iostream>
using namespace std;
class student
{
    int roll ,marks;
    public:
        student(int r, int m)
        {
            roll = r;
            marks = m;
        }
        student(student &t);
        void showdata()
        {
            cout<<endl<<"Roll : "<<roll;
            cout<<endl<<"Marks : "<<marks;
        }
};
student :: student(student &t)
{
    roll = t.roll;
    marks = t.marks;
}
int main()
{
    student shreyas(20,30);
    shreyas.showdata();

    cout<<"\n\nOutput of copy constructor"<<endl;
    student prathamesh(shreyas);
    prathamesh.showdata();
    return 0;
}