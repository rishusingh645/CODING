#include<iostream>
using namespace std;   
int main()  
{  
    int n;  
    cout<<"Enter a number: ";  
    cin>>n;  
    for(int i=2;i<=n;i++)  
    {  
        if(i%2==0 && i%3==0)  
        {  
            cout<<i<<endl;  
        }
        else if(i%6==0)  
        {  
            cout<<i<<endl;  
        }
        
    }
    return 0;  
}