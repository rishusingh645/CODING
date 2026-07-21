#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number=";
    cin>>num;
    int org;
    org = num;
    int rev=0;
    while (num>0)
    {int last=num%10;
    rev=rev*10+last;
num=num/10;}
if (org == rev)
{cout<<"the number is palindrome";}
else
{cout<<"the number is not a palindrome";}
return 0;

} 