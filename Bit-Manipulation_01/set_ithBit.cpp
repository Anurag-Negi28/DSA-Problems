#include <iostream>
using namespace std;

int setithBit(int a, int i)
{
    int mask = 1 << i;
    a = a | mask;
    return (a);
}
int main()
{
    int a = 5;
    int i = 1;
    cout << "set bit is " << setithBit(a, i);
}