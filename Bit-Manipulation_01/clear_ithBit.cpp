#include <iostream>
using namespace std;

void clear_ithBit(int &a, int i)
{
    int mask = 1 << i;
    a = a & (~mask);
}
int main()
{
    int a = 5;
    int i = 2;
    clear_ithBit(a, i);
    cout << "Cleared ith bit " << a;
}