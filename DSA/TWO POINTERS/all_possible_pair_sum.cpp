#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>a = {1,2,4,5,7,11,15};
    int target = 9;
    int start = 0;
    int found = 0;
    int end = a.size() - 1;
    while (start < end)
    {
        int sum = a[start]+a[end];
        if(sum == target)
        {
            cout<<a[start]<<" "<<a[end]<<endl;
            found = 1;
            start++;
            end--;
        }
        else if (sum > target)
            end--;
        else
            start++;
    }
    if(!found)
        cout<<"No pair found with the given sum."<<endl;
    return 0;
}