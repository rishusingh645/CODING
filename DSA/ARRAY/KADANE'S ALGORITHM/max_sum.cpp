#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int max_sum = INT_MIN;
    int current_sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        current_sum += arr[i];
        max_sum = max(max_sum, current_sum);
        if (current_sum < 0)
            current_sum = 0;
    }
    cout <<"MAXIMUM SUM: " << max_sum << endl;
    return 0;
}