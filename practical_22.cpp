#include<iostream>
using namespace std;

class shreyas{
    public:
    void print(){
        cout<<"I am a function with no arguements"<<endl;
    }
    void print(int i){
        cout<<"I am a function with one arguements"<<endl;
    }
    void print(int a , int b){
        cout<<"I am a function with two arguements";
    }
};

int main()
{
    shreyas a;
    a.print();
    a.print(2);
    a.print(4,5);
    return 0;
}