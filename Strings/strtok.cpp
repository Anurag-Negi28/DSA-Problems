// String tokenisation through strtok

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    char str[100];
    cin.getline(str, 100);
    char *token = strtok(str, " ");
    while (token != NULL)
    {
        cout << token << endl;
        token = strtok(NULL, " ");
    }
}