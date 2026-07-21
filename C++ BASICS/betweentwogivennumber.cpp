#include<iostream>
using namespace std;   
int main()  
{  
    int n;  
    cout<<"Enter greatest number: ";  
    cin>>n;  
    int m;  
    cout<<"Enter smallest number: ";  
    cin>>m;  
    cout<<"The even numbers between "<<m<<" and "<<n<<" are: "<<endl;
    for(int i=m; i<=n; i++)  
    {  
        if(i%2==0)  
        {  
            cout<<i<<endl;  
        }  
    }
    return 0;  
}