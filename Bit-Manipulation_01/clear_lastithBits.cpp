#include <iostream>
using namespace std;

// Step 1 is to clear all the ith bits from -1 that will be our mask
// Step 2 is to do & of no. and mask

void clear_lastithBit(int &a, int i)
{
    int mask = -1 << i;
    a = a & (mask);
}
int main()
{
    int a = 5;
    int i = 2;
    clear_lastithBit(a, i);
    cout << "Cleared ith bit " << a;
}