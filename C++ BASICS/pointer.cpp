#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    int *p = &a;
    cout<<"cube of a is: "<<(*p)*(*p)*(*p)<<endl;
    return 0;

}