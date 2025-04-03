/*
Smallest String
You're given a list of n strings a1, a2,... an. You'd like to
concatenate them together in some order such that the
resulting string would be lexicographically smallest.
Given the list of strings, output the lexicographically
smallest concatenation.
*/

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

bool compare(string a, string b)
{
    return a + b < b + a;
}

int main()
{
    string arr[] = {"a", "ab", "abc", "abcd"};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    sort(arr, arr + n, compare);          // Compare is our custom comparator
    for (auto s : arr)
    {
        cout << s;
    }
    return 0;
}