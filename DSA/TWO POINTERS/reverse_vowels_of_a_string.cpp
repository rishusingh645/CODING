#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool is_lower(char c)
{
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int main()
{
    string s = "hEllo wOrld";
    int start = 0, end = s.length()-1;
    while (start <= end)
    {
        if(!is_lower(s[start]))
            start++;
        else if (!is_lower(s[end]))
            end--;
        else
            swap(s[start++],s[end--]);
    }
    cout<<s<<endl;
    return 0;
}