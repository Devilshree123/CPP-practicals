#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string name;
    ofstream cname("sample.txt");
    cout<<"Enter your name "<<endl;
    cin>>name;
    cname<<"My name is " <<name;
    return 0;
}