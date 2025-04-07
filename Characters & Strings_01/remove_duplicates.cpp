#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s)
{
    // your code goes here
    sort(s.begin(), s.end());
    string output = "";
    output = s[0];
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[i + 1] && s[i + 1] != '\0')
        {
            output += s[i + 1];
        }
    }
    return output;
}
int main()
{
    string s = "geeksforgeeks";
    cout << "Original string: " << s << endl;
    string result = removeDuplicate(s);
    cout << "String after removing duplicates: " << result << endl;
    return 0;
}