#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> a = {1,8,6,2,5,4,8,3,7};
    int start = 0 , end = a.size()-1;
    int max_water = INT16_MIN;
    while (start <= end)
    {
        int dist = end - start;
        int area = min(a[start],a[end])*dist;
        max_water = max(max_water,area);
        if (a[start] > a[end])
            end--;
        else
            start++;
    }
    cout<<max_water<<endl;
    return 0;
}