#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number=";
    cin>>n;
    for (int x=2;x<=n;x++)
    { int count = 0;
        for (int y=1;y<=x;y++)
        {if(x%y==0){
        count+=1;}
}
if(count==2)
{cout<<x<<"\n";}
    }
return 0;
}
