#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i < arr.size(); i++)
        cin>>arr[i];
    int current_sum = 0, min_sum = INT_MAX;
    for(int i = 0; i < arr.size(); i++)
    {
        current_sum += arr[i];
        min_sum = min(min_sum, current_sum);
        if(current_sum > 0)
            current_sum = 0;
    }
    cout<<"MINIMUM SUM: "<<min_sum<<endl;
    return 0;
}