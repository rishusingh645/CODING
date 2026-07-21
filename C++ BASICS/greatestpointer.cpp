#include<iostream>
using namespace std;
int main(){
    int a[5];
    int *p;
    for (int i=0;i<5;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>a[i];
    }
    int greatest = a[0];
    for (int i=0;i<5;i++){
        if (a[i]>greatest){
            greatest = a[i];
            p = &a[i];
        }
    }
    cout<<"Greatest element is: "<<*p<<endl;
    return 0;
}