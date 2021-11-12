#include<iostream>
using namespace std;

class Time
{
 private:
int H,M,S;
public:
Time()
{
    H = 0;
    M = 0;
    S = 0;
}
Time(int s)
{
    H = 0;
    M = 0;
    S = s;
}
Time(int s,int m)
{
    H = 0;
    M = m;
    S = s;
}
Time(int h,int m,int s)
{
    H = h;
    M = m;
    S = s;
}
void showdata()
{
     cout<<"Time = "<<H<<":"<<M<<":"<<S<<endl;
}
};

int main()
{
Time a;
a.showdata();
Time b(10);
b.showdata();
Time c(35,40);
c.showdata();
Time d(2,39, 43);
d.showdata();
}