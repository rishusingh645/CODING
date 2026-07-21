#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a = {1,2,2,3,3,3,3,4,5,6,10,10,10,10,10,10};
    int start = 0;
    int next = 1;
    while (next < a.size())
    {
        if (a[start] != a[next])
            {
                a[start + 1] = a[next];
                start++;
            }
        else
            next++;
    }
    for (int i = 0; i <= start; i++)
        cout << a[i] << " ";
    return 0;
}