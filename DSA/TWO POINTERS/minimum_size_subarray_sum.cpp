#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;
    int start = 0, sum = 0, min_length = INT_MAX;
    for (int next = 0; next < nums.size(); next++)
    {
        sum += nums[next];
        while(sum >= target)
        {
            int length = next - start + 1;
            min_length = min(min_length,length);
            sum -= nums[start++];
        }
    }
    if (min_length == INT_MAX)
        cout<<0<<endl;
    else
        cout<<"THE LENGTH IS:"<<min_length;
}