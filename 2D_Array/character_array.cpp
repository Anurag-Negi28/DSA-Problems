#include <iostream>
using namespace std;

int main()
{
    char ch[][10] = {
        "Hello",
        "My",
        "Name is",
        "Anurag"};
    int rows = sizeof(ch) / sizeof(ch[0]);
    for (int i = 0; i < rows; i++)
    {
        cout << ch[i] << endl;
    }
}
// Character array shows a different behaviour than other arrays
// A 2D character array behaves like an array of null-terminated strings, but each row has a fixed size.