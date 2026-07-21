#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string s = "naman";
    int start = 0, end = s.size() - 1;
    while (start < end)
    {
        if (s[start] != s[end])
        {
            cout << "Not a palindrome" << endl;
            return 0;
        }
        start++;
        end--;
    }
    cout << "Palindrome" << endl;
    return 0;
}