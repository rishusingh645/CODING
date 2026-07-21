#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> nums = {-4,-1,0,3,10};
    int start = 0 , end = nums.size()-1;
    vector <int> result(nums.size());
    int i = end;
    while (start <= end)
    {
        if(abs(nums[start]) < abs(nums[end]))
            {
                result[i] = nums[end]*nums[end];
                end--;
                i--;
            }
        else
            {
                result[i] = nums[start]*nums[start];
                start++;
                i--;
            }
    }
    cout<<"THE SQUARES OF SORTED ARRAY IS: "<<endl;
    for(int i = 0; i < result.size(); i++)
        cout<<result[i]<<" ";
    return 0;
}