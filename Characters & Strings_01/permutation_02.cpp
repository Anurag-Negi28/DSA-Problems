/*Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.*/

// Solution-If the window frequency matches with the frequency of s1 then the permutation exist in s2
#include <bits/stdc++.h>
using namespace std;
bool checkInclusion(string s1, string s2)
{
    vector<int> freq1(26, 0), freq2(26, 0);
    // Storing frequency of s1 in freq1
    for (auto c : s1)
    {
        freq1[c - 'a']++;
    }
    // window size is size od s1
    //  Storing frequency of s2 in freq2 till window size
    for (int i = 0; i < s1.length(); i++)
    {
        freq2[s2[i] - 'a']++;
    }
    // check if the window matches
    if (freq1 == freq2)
        return true;
    // Now move the window
    for (int i = s1.length(); i < s2.length(); i++)
    {
        // Add new character frequencies
        freq2[s2[i] - 'a']++;
        // Remove older character frequencies
        freq2[s2[i - s1.length()] - 'a']--;
        // Check if the window frequency is equal or not
        if (freq1 == freq2)
            return true;
    }
    return false;
}
int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";
    if (checkInclusion(s1, s2))
    {
        cout << "s2 contains a permutation of s1" << endl;
    }
    else
    {
        cout << "s2 does not contain a permutation of s1" << endl;
    }
    return 0;
}