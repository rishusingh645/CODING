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
    int max_sum=0,sum=0;
    for (int i=0;i<k;i++)
        sum+=arr[i];
    max_sum=sum;
    for(int i=1;i<=n-k;i++)
    {
        sum = sum - arr[i-1] + arr[i+k-1];       
        max_sum=max(max_sum,sum);
    }
    cout<<"Maximum sum of subarray of size "<<k<<" is: "<<max_sum<<endl;
}