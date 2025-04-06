#include <iostream>
using namespace std;

// take a string input and count the no. of digits, alphabets and spaces
int main()
{
    int digit = 0;
    int alpha = 0;
    int spaces = 0;
    char c;
    c = cin.get();
    while (c != '\n')
    {
        c = cin.get();
        if (c >= '0' & c <= '9')
        {
            digit++;
        }
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        {
            alpha++;
        }
        else if (c == ' ' || c == '\t')
        {
            spaces++;
        }
    }
    cout << "No. of digits " << digit << endl;
    cout << "No. of aplhabets " << alpha << endl;
    cout << "No. of spaces " << spaces << endl;
}