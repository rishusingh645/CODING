#include <iostream>
using namespace std;
#include <vector>
#include <string>
int main()
{
    string s = "   the sky is blue  ";
    string result = "";
    int start = 0 , end = s.length()-1;
    while(start <= end && s[start] == ' ')
        start++;
    while(end >= start && s[end] == ' ')
        end--;
    int right = end;
    while(start <= right)
    {
        while(right >= start && s[right] == ' ')
            right--;
        if (right < start)
            break;
        int left = right;
        while(left >= start && s[left] != ' ')
            left--;
        string temp = s.substr(left+1 , right-left);
        if (!result.empty())
            result += ' ';
        result += temp;
        right = left;
    }
    cout<<result<<endl;
    return 0;
}