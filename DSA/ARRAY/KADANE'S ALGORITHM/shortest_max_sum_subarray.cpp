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
    int current_sum = 0, end = 0, temp_start = 0, length_max = 0, begin = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        current_sum += arr[i];
        int length_current = i - temp_start + 1;
        if (current_sum > max_sum)
        {
            max_sum = current_sum;
            begin = temp_start;
            end = i;
            length_max = length_current;
        }
        else if (current_sum == max_sum)
        {
            if (length_current < length_max)
            {
                length_max = length_current;
                begin = temp_start;
                end = i;
            }
        }
        if (current_sum <= 0)
        {
            current_sum = 0;
            temp_start = i + 1;
        }
    }
    cout << "Shortest maximum sum subarray is: ";
    for (int i = begin; i <= end; i++)
        cout << arr[i] << " ";
    cout << "\nMaximum sum is: " << max_sum << endl;
    return 0;
}