#include <iostream>
#include <vector>
using namespace std;
bool valid(string &s, int i, int j)
{
    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}
int main()
{
    string s = "abca";
    bool type;
    int beg = 0, end = s.length()-1;
    while (beg <= end)
    {
        if (s[beg] != s[end])
            type = valid(s,beg,end-1) || valid(s,beg+1,end);
        beg++;
        end--;
    }
    if (type == true)
        cout<<"PALINDROME";
    else
        cout<<"NOT A PALINDROME";
    return 0;
}