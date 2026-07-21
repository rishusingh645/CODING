#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the term you want to know=";
    cin>>num;
    int a=0;
    int b=1;
    int c=1;
    int sum=0;
    for (int x=4;x<num;x++)
    {
        sum=a+b+c;
        a=b;
        b=c;
        c=sum;
        
    }
    cout<<sum<<"\n";

    return 0;
}