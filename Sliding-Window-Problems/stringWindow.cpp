/*
String Window
Given two strings, one big string and one small string, find
the 'smallest window' in the big string that contains all
characters of the small string.
- Window can have additional characters than required.
- If small string has duplicates, then those duplicates must
be present with same or higher count in window.
Input:
s1 = hello_world
s2 = lol
Output:
llo
*/

#include <iostream>
#include <cstring>
#include <string>
#include <climits>
using namespace std;

string stringWindow(string s, string p)
{
    int FP[256] = {0}; // Frequency of pattern
    int FS[256] = {0}; // Frequency of string

    for (int i = 0; i <= p.length(); i++)
    {
        FP[p[i]]++;
    }

    // Sliding window algorithm
    int count = 0;            // Count the number of matches in the pattern
    int start = 0;            // Start of the window
    int start_idx = -1;       // Start inedx of best window
    int min_so_far = INT_MAX; // Minimum window so far
    int window_size;

    for (int i = 0; i <= s.length(); i++)
    {
        char ch = s[i];
        FS[ch]++;
        // Match the characters, also the frequency of the character should be less than in pattern
        if (FP[ch] != 0 && FS[ch] <= FP[ch])
        {
            count++;
        }
        // After finding all the characters in the current window start contarcting from left of the window
        if (count == p.length()) // Codition to find whether the all cahracters are matched or not
        {
            // Start contracting from left
            while (FP[s[start]] == 0 or FS[s[start]] > FP[s[start]]) // check for char's absent in the pattern or having frequency greater than in pattern
            {
                FS[s[start]]--;
                start++;
            }
            // note the window size
            window_size = i - start + 1;
            if (window_size < min_so_far) // Checking minimum window size
            {
                min_so_far = window_size;
                start_idx = start;
            }
        }
    }
    if (start_idx == -1) // Check if the window is empty or not
    {
        return "No window found";
    }
    return s.substr(start_idx, min_so_far);
}

int main()
{
    string s;
    cin >> s;
    string p;
    cin >> p;
    cout << stringWindow(s, p) << endl;
    return 0;
}