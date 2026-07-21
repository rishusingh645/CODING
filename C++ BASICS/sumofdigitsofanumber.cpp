#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number=";
    cin>>num;
    int sum=0;
    while (num>0)
    {
        int rem=num%10;
        sum+=rem;
        num=num/10;
    }
    cout<<"sum of digits of given number="<<sum;
    return 0;
}