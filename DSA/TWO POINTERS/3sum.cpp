#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector <int> nums = {-1,0,1,2,-1,-4};
    vector <vector<int>> result;
    sort(nums.begin(),nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if(i > 0 && nums[i] == nums[i-1])
            continue;
        int beg = i + 1;
        int end = nums.size()-1;
        int target = -nums[i];
        while(beg < end)
        {
            int sum = nums[beg] + nums[end];
            if (sum > target)
                end--;
            else if (sum < target)
                beg++;
            else
            {
                result.push_back({nums[beg],nums[end],nums[i]});
                beg++;
                end--;
                while(beg < end && nums[beg] == nums[beg-1])
                    beg++;
                while(beg < end && nums[end] == nums[end+1])
                    end--;
            }
        }
    }
    cout<<"RESULTANT TRIPLETS WHICH FORM ZERO ARE:"<<endl;
    for(int i = 0; i < result.size(); i++)
    {
        for(int j = 0; j < result[i].size();j++)
            cout<<result[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}