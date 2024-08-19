/*
Check Subsets
Given two non-empty strings, write a function that
determines whether the second string is subsequence of
first one.
Sample Input
codingminutes
cines
Sample Output
Yes
*/

#include <iostream>
#include <cstring>
using namespace std;

bool checkSubsets(string s1, string s2)
{
    int i = 0, j = 0;
    while (i < s1.length() && j < s2.length())
    {
        if (s1[i] == s2[j])
        {
            j++;
        }
        i++;
    }
    if (j == s2.length())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s1, s2;
    cout << "Enter first string: ";
    getline(cin, s1);
    cout << "Enter second string: ";
    getline(cin, s2);
    if (checkSubsets(s1, s2))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}