#include <iostream>
#include <cstring>
using namespace std;

// covering strcpy(), strcmp(), strcat()

int main()
{
    char ch[] = "anurag";
    char c[10];
    // strcpy(destination, source)
    strcpy(c, ch);
    cout << "Copied string: " << c << endl;
    // strcmp
    char a[] = "anurag";
    char b[] = "anurag";
    cout << "Comparing a and b " << strcmp(a, b) << endl;
    // strcat
    char d[] = "Ashutosh is ";
    char e[] = "gay";
    cout << "Concatenated string is " << strcat(d, e);
}