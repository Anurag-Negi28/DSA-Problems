/*
Finding Subsets
Given a string, find all subsets of the given string.
Input
abc
Output
"",a,b,c,ab, ac, bc, abc
*/
#include <iostream>
#include <string>
using namespace std;

void findSubsets(string s, string ans)
{
    // Base Class
    if (s.length() == 0)
    {
        cout << ans << endl;
    }
    // Recursive Case
    else
    {
        char ch = s[0];
        string ros = s.substr(1);
        findSubsets(ros, ans);
        findSubsets(ros, ans + ch);
    }
}
int main()
{
    string s;
    cout << "Enter a string" << endl;
    cin >> s;
    findSubsets(s, "");
    return 0;
}