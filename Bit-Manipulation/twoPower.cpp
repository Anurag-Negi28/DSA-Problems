#include <iostream>
using namespace std;

bool checkPowerofTwo(int n)
{
    int mask = n & (n - 1);
    if (mask == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << checkPowerofTwo(n);
    return 0;
}