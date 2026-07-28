#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> nums1 = {4,9,5};
    vector <int> nums2 = {9,4,9,8,4};
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    vector<int>result;
    int i = 0, j = 0;
    while (i < nums1.size() && j < nums2.size())
    {
        if (i > 0 && nums1[i] == nums1[i-1])
            i++;
        else if (j > 0 && nums2[j] == nums2[j-1])
            j++;
        else if (nums1[i] == nums2[j])
        {
            result.push_back(nums1[i]);
            i++;
            j++;
        }
        else if (nums1[i] < nums2[j])
            i++;
        else
            j++;
    }
    cout<<"RESULTANT ARRAY IS : ";
    for (int i = 0; i < result.size(); i++)
        cout<<result[i]<<" ";
    cout<<endl;
    return 0;
}