#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number=";
    cin>>num;
    int org=num;
    int sum=0;
    while (num>0)
    {
        
        int factorial=1;
        int rem = num%10;
        for (int i = 1; i <= rem ; i++)
        {
            factorial=factorial*i;
        }
        sum+=factorial;
        num=num/10;
        
    }
    if (org == sum)
    {
         cout<<"the number is a strong number";
    }
    else
    {
        cout<<"the number is not a strong number";
    }
    return 0;
    
}