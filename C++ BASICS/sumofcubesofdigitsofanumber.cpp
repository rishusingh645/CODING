#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number=";
    cin>>num;
    int sum=0;
    while (num>0)
    {
        int rem=num%10;
        int cube=rem*rem*rem;
        sum+=cube;
        num=num/10;
    }
    cout<<"sum of cube of digits of the given numbers="<<sum;
    return 0;
}