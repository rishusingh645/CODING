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
    int min_sum = INT_MAX;
    int current_sum = 0, end = 0, temp_start = 0, length_max = 0, start = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        current_sum += arr[i];
        int length_current = i - temp_start + 1;
        if (current_sum < min_sum)
        {
            min_sum = current_sum;
            start = temp_start;
            end = i;
            length_max = length_current;
        }
        else if (current_sum == min_sum)
        {
            if (length_current > length_max)
            {
                length_max = length_current;
                start = temp_start;
                end = i;
            }
        }
        if (current_sum > 0)
        {
            current_sum = 0;
            temp_start = i + 1;
        }
    }
    cout << "Longest minimum sum subarray is: ";
    for (int i = start; i <= end; i++)
        cout << arr[i] << " ";
    cout << "\nMinimum sum is: " << min_sum << endl;
    return 0;
}