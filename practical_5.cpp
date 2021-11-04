#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the values of a and b : "<<endl;
    cin>>a>>b;
    int arr[a][b];
    cout<<"Enter the elements in two dimensional array "<<endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"Your Matrix is "<<endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}