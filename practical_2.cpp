#include<iostream>
using namespace std;

int main()
{
    int a;
    int age;
    cout<<"\t\t\t_____________________________________"<<endl;
    cout<<"\t\t\t1.Check your eligibility for voting "<<endl;
    cout<<"\t\t\t2.Exit"<<endl;
    cout<<"\t\t";
    cin>>a;
    switch (a)
    {
    case 1:
        cout<<"\t\t\tEnter your age : ";
        cin>>age;
        if (age>=18)
        {
            cout<<"\t\t\tYou can Vote"<<endl;   
        }
        else
        cout<<"\t\t\tYou cannot Vote"<<endl;
        break;

    case 2:
        exit;
        break;
    
    default:
        cout<<"\t\t\tYou have entered a wrong choice"<<endl;
        break;
    }
    cout<<"\t\t\t_____________________________________"<<endl;
    return 0;
}