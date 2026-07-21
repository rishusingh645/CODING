#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the value of n:";
    cin>>n;
    cout<<"enter the value of m:";
    cin>>m;
    int max;
    max = (n>m) ? n : m;
    for(int i=max;;i++)
    {
        if (i%n==0 && i%m==0)
        {
            cout<<"lcm = "<<i;
            break;
        }
    }
    return 0;
}