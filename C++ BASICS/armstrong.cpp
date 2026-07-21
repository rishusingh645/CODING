#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number=";
    cin>>num;
    int org=num;
    int sum=0;
    while (num>0)
    {
        int rem = num%10;
        sum+=rem*rem*rem;
        num=num/10;
    }
    if (org==sum)
    {
        cout<<"the number is armstrong";
    }
    else
    {
        cout<<"the number is not armstrong";
    }
return 0;
}