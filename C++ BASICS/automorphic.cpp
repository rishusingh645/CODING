#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number=";
    cin>>num;
    int square = num*num;
    while (num>0)
    {
        if (num%10!=square%10)
        {
            cout<<"The number is not automorphic";}
            num=num/10;
            square=square/10;}
       cout<<"The number is automorphic"; 
    return 0;
}