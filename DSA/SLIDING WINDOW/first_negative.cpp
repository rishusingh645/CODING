#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,k;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the size of window: ";
    cin>>k;
    vector<int> arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)    
        cin>>arr[i];
    int i=0,j=0;
    while(k<=n)
    {
        if(arr[j]<0)
        {
            cout<<arr[j]<<" ";
            i++;
            j=i;
            k++;
        }
        else if(j == k-1)
        {
            cout<<"0 ";
            i++;
            j=i;
            k++;
        }
        else
            j++;
    }
}