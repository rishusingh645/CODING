#include<iostream>
using namespace std;
void Rishu(int n,int m,int r)
{
    int SI;
    SI=(n*m*r)/100;
    cout<<"Simple Interest is: "<<SI<<endl;
}
int main() {
    int x,y,z;
    cout<<"Enter the value of Principle:";
    cin>>x;
    cout<<"Enter the value of Rate:";
    cin>>y;
    cout<<"Enter the value of Time:";
    cin>>z;
    Rishu(x,y,z);
    return 0;
}