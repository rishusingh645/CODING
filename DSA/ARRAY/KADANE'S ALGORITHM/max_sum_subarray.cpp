#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int current_sum = 0;
    int max_sum = INT_MIN;
    int start = 0, end = 0, temp_start = 0;
    for (int i = 0; i < n; i++)
    {
        current_sum += arr[i];
        if (current_sum > max_sum)
        {
            max_sum = current_sum;
            start = temp_start;
            end = i;
        }
        if (current_sum < 0)
        {
            current_sum = 0;
            temp_start = i + 1;
        }
    }
    cout << "Maximum sum of continuous subarray is: " << max_sum << endl;
    cout << "Subarray elements are: ";
    for (int i = start; i <= end; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}