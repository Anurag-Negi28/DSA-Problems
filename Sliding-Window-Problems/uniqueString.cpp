/*
Unique Substring
Given a string, write a function to find the largest
substring with unique characters (no duplicates)
Sample Input
prateekbhaiya
aabcb
Sample Output
ekbhaiy
abc
*/

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

string uniqueString(string s)
{
    unordered_map<int, string> m;
    int n = s.length();
    int i = 0;
    j = 0;
    for (int i = 0; i < n; i++)
    {
        m.insert({i, s[i]});
    }
}
