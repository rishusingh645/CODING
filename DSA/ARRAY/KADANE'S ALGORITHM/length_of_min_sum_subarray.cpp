#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
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
    int temp_start = 0, start = 0, end = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        current_sum += arr[i];
        if (current_sum < min_sum)
            {
                min_sum = current_sum;
                start = temp_start;
                end = i;
            }
        if(current_sum > 0)
            {
                current_sum = 0;
                temp_start = i + 1;
            }
    }
    int length = end - start + 1;
    cout<<"The length of the subarray with minimum sum is: "<<length;
    cout<<endl;
    return 0;
}