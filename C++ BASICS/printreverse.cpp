#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number=";
    cin>>a;
    int x=0;
    while (a>0){
        x=a%10;
        cout<<x<<"\n";
        a=a/10;
    }
    return 0;
}
