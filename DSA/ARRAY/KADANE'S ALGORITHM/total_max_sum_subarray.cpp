#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int max_sum = INT_MIN;
    int current_sum = 0;
    int count = 0, starts = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        current_sum += arr[i];
        if (current_sum > max_sum)
        {
            max_sum = current_sum;
            count = starts;
        }
        else if (current_sum == max_sum)
            count += starts;
        if (current_sum == 0)
            starts++;
        else if (current_sum < 0)
            {
                current_sum = 0;
                starts = 1;
            }
    }
    cout<<"Total maximum sum subarray is: "<<count <<endl;
    return 0;
}