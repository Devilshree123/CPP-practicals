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
    cout<<kg<<" Kilogram "<<gm<<" Gram "<<endl;
}
Weight operator + (Weight& W1)
{
    Weight W2;
    W2.kg = kg + W1.kg;
    W2.gm = gm + W1.gm;
    return W2;
}
};

int main(){

    Weight W,W3,W4;
    W3.get(10,20);
    W3.show();
    W4.get(20,10);
    W4.show();
    W = W3 + W4;
    W.show();
    return 0;
}