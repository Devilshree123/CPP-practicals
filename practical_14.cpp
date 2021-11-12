#include<iostream>
using namespace std;

class Weight
{
private:
int kg,gm;
public:
void get(int k,int g)
{
    kg = k;
    gm = g;
}
void show()
{
    cout<<kg<<" Kilogram "<<gm<<" gram"<<endl;
}
 
 void operator+()
 {
     kg++;
     gm++;
 }
};


int main(){

    Weight W;
    W.get(10,20);
    W.show();
    +W;
    cout<<"Incremented = ";
    W.show();
    return 0;
}