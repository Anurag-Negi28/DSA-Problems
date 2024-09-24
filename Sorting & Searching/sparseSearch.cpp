/*
Sparse Search
Given a sorted array of strings that is
interspersed with empty strings, write a method
to find the location of a given string.
Input
["ai","","", "bat", "", "car", "cat", "", "dog"]
bat
Output
4
*/

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int spareseSearch(vector<string> s, string key)
{
    int start = 0;
    int end = s.size();
    while (start <= end)
    {
        int mid = (end + start) / 2;
        if (s[mid] == "")
        {
            int left = mid - 1;
            int right = mid + 1;
            while (true)
            {
                if (left < start && right > end)
                {
                    return -1;
                }
                else if (right <= end && s[right] != "")
                {
                    mid = right;
                    break;
                }
                else if (left >= start && s[left] != "")
                {
                    mid = left;
                    break;
                }
                right++;
                left--;
            }
        }
        if (s[mid] == key)
        {
            return mid + 1;
        }
        else if (s[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}

int main()
{
    vector<string> s = {"ai", "", "", "bat", "", "car", "cat", "", "dog"};
    string key = "dog";
    cout << spareseSearch(s, key);
    return 0;
}
