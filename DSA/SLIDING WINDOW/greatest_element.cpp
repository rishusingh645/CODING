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
    int i=0;
    while(k<=n)
    {
        vector<int> temp;
        for(int x=i;x<k;x++)
            temp.push_back(arr[x]);
        sort(temp.begin(),temp.end());
        cout<<temp.back()<<" ";
        i++;
        k++;
    }
}