/*
Smallest Distinct Window
Given a string, find the smallest window (substring) which contains all distinct characters of the given input string.
Sample Inputs
aabcbcdbcaaad
aaaa
Sample Outputs
dbca
a
Explanation : The smallest window is "dbca" as it contains all the distinct letters from input string.
Similarly for the second case the answer should be 'a'.
*/

#include <iostream>
#include <string>
#include <climits>
using namespace std;

const int max_chars = 256;

string smallestWindow(string str)
{
    int n = str.length();
    if (n == 0)
    {
        return "";
    }
    // Count the no. of distinct characters
    int dist_char_count = 0;
    bool visited[max_chars] = {false};
    for (int i = 0; i < n; i++)
    {
        if (visited[str[i]] == false)
        {
            visited[str[i]] = true;
            dist_char_count++;
        }
    }

    // Create the window

    int start = 0;
    int start_index = -1;
    int min_len = INT_MAX;
    int count = 0;
    int curr_count[max_chars] = {0};
    for (int j = 0; j < n; j++)
    {
        // Count freguency of characters
        curr_count[str[j]]++;

        // Check if any distinct character matches then increment count
        if (curr_count[str[j]] == 1)
        {
            count++;
        }
        // Check if all characters are matched
        if (count == dist_char_count)
        {
            // Contracting the window
            while (curr_count[str[start]] > 1) // check if the character appeared more than once
            {
                if (curr_count[str[start]] > 1)
                    curr_count[str[start]]--; // if yes then remove it
                start++;
            }
            // update the window sizeof
            int len_window = j - start + 1;
            if (len_window < min_len)
            {
                min_len = len_window;
                start_index = start;
            }
        }
    }

    // Return empty string if window not created
    if (start_index == -1)
    {
        return "";
    }
    // Return substring starting from start_index
    // and length min_len
    return str.substr(start_index, min_len);
}

int main()
{
    string str;
    cin >> str;
    cout << smallestWindow(str) << endl;
    return 0;
}
