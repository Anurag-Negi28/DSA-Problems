#include <iostream>
#include <cstring>
using namespace std;

// Problem with cin is does not support whitespcaes or newline characters
int main()
{
    // cout << "Enter a name " << endl;
    char c[100];
    // cin >> c;
    // cout << "Entered string " << c << endl;
    // To tackle this we can use get() function it can recoginize whitespaces and new line characters
    char temp = '\0'; // Initialize temp
    int len = 0;
    while (temp != '\n')
    {
        temp = cin.get();
        if (temp != '\n') // Avoid storing the newline character
        {
            c[len++] = temp;
        }
    }
    c[len] = '\0'; // Nulll terminate the string
    cout << "Entered string " << c;
}