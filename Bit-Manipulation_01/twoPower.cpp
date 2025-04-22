#include <iostream>
using namespace std;

bool twoPower(int a)
{
    if (!(a & (a - 1)))
    {
        return true;
    }
    return false;
}
int main()
{
    int a = 5;
    int i = 1;
    if (twoPower(a))
        cout << "a is a power of 2 ";
    else
        cout << "a is not a power of 2 ";
}