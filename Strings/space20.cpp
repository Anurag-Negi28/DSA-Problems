// Space20
// Given a string, write a function to replace all spaces in a
// string with '%20'. It is given that the string has sufficient
// space at the end to hold the additional characters.
// Sample Input
// hello
// world, how are you?
// Sample Output
// hello&20world,%20%20how%20are%20you?

// Bad Approach

#include <iostream>
#include <string>
using namespace std;

string replaceString(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            s.replace(i, 1, "%20");
        }
    }
    return s;
}

int main()
{
    string s;
    cout << "Enter a String: ";
    getline(cin, s);
    cout << "The entered string is: " << s << endl;
    cout << "After: " << replaceString(s) << endl;
    return 0;
}