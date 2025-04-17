#include <iostream>
using namespace std;

int getithBit(int a, int i)
{
    int mask = a << i;
    return (mask & a) > 0 ? 1 : 0;
}
int main()
{
    int a = 5;
    int i = 2;
    cout << i << "th bit of " << a << " is " << getithBit(a, i);
}