#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int target;
    cout<<"Enter target element to be removed: ";  
    cin >> target;
    int start = 0, next = 1;
    while (next < n)
    {
        if (arr[start] == target && arr[next] != target)
            swap(arr[start++],arr[next++]);
        else if (arr[start] == target && arr[next] == target)
            next++;
        else
        {
            start++;
            next++;
        }
    }
    cout<<"AFTER REMOVING TARGET ELEMENT THE ARRAY BECOMES: "<<endl;
    for(int i = 0; i < start; i++)
        cout<<arr[i]<<" ";
    return 0;
}