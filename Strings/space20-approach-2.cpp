// Optimized Approach

#include <iostream>
#include <string>
using namespace std;

string replaceString(string s)
{
    int space = 0;
    for (char b : s)
    {
        if (b == ' ')
        {
            space++;
        }
    }
    int newLength = s.length() + 2 * space;
    string result(newLength, ' ');
    int j = newLength - 1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            result[j] = '0';
            result[j - 1] = '2';
            result[j - 2] = '%';
            j = j - 3;
        }
        else
        {
            result[j] = s[i];
            j--;
        }
    }
    return result;
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