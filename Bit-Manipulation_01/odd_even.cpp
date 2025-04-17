#include <iostream>
using namespace std;

bool isEven(int a)
{
    if (a & 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int a = 5;
    cout << "Is a even " << isEven(a);
}