#include<iostream>
using namespace std;

int main()
{
    int arr[100],u_size;
    cout<<"Enter the number of elements you want to enter in the array : ";
    cin>>u_size;
    cout<<"Enter the elements in the array "<<endl;
    for(int i=1;i<=u_size;i++)
    {
        cin>>arr[i];        
    }
    for(int i=1;i<=u_size;i++)
    {
        cout<<arr[i]<<" is with "<<i<<" index in this array"<<endl;        
    }
    
    return 0;
}