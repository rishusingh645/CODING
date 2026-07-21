#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number";
    cin>>a;
    int factors=0;
    for(int x=1;x<=a;x++)
    {
        if (a%x==0)
        {factors+=1;}

    }
    if (factors==2)
    {cout<<"the number is prime";}
    else
    {cout<<"the number is not prime";}
    return 0;

}