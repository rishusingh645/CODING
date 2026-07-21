#include <iostream>
using namespace std;
void rishu()
{
    int n;
    cout<<"enter the length of array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter element "<<i+1<<" : ";
        cin>>a[i];
    }
    int i=0;
    int found=1;
    while (found==1)
    {
        found = 0;
    
    
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                found=1;
            }

            
        }
        i++;
    
    }
    cout<<"Sorted array = ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    rishu();
    return 0;
}