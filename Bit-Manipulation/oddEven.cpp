#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    if (number & 1)
    {
        cout << "Odd";
    }
    else
    {
        cout << "Even";
    }
    return 0;
}