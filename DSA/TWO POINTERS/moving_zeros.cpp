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
    int start = 0, next = 1;
    while (next < n)
    {
        if (arr[start] == 0 && arr[next] != 0)
            swap(arr[start++],arr[next++]);
        else if (arr[start] == 0 && arr[next] == 0)
            next++;
        else
        {
            start++;
            next++;
        }
    }
    cout<<"AFTER MOVING ZEROS THE ARRAY BECOMES: "<<endl;
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    return 0;
}