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
    for (int i = 0; i < n; i++)
    {
        current_sum += arr[i];
        max_sum = max(max_sum, current_sum);
        if (current_sum < 0)
            current_sum = 0;
    }
    int count = 0;
    for(int i = 0; i < arr.size();i++)
    {
        int sum = 0;
        for(int j = i; j < arr.size();j++)
            {
                sum += arr[j];
                if(sum == max_sum)
                    count++;
            }
    }
    cout << "Number of subarrays with maximum sum: " << count << endl;
    return 0;
}