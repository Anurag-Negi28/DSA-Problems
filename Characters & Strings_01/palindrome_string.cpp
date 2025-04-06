#include <iostream>
using namespace std;
#include <cstring> // Include cstring for strlen()

bool isPalindrome(char *ch)
{
    int len = strlen(ch); // Use strlen() to get the length of the C-style string
    string rev = "";
    for (int i = len - 1; i >= 0; i--)
    {
        rev = rev + ch[i];
    }
    return rev == string(ch);
}

int main()
{
    char ch[100];
    cout << "Enter a string ";
    cin.getline(ch, 100);
    if (isPalindrome(ch))
    {
        cout << "The string is palindrome" << endl;
    }
    else
    {
        cout << "The string is not palindrame" << endl;
    }
}