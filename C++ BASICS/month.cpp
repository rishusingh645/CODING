#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter year: ";
    cin>>year;
    int month;
    cout<<"Enter month (1-12): ";
    cin>>month;
    if (year % 4==0 || (year % 100==0 && year % 400==0)){
        cout<<"year is a leap year"<<endl;
        if (month==2){
            cout<<"29 days"<<endl;
        }
        else if (month==4 || month==6 || month==9 || month==11){
            cout<<"30 days"<<endl;
        }
        else{
            cout<<"31 days"<<endl;
        }
    }
    else{
        if (month==2){
            cout<<"28 days"<<endl;
        }
        else if (month==4 || month==6 || month==9 || month==11){
            cout<<"30 days"<<endl;
        }
        else{
            cout<<"31 days"<<endl;
        }
    }
}