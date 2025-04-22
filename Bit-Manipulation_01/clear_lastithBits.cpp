#include <iostream>
using namespace std;

// Step 1 is to clear all the ith bits from -1 that will be our mask
// Step 2 is to do & of no. and mask

void clear_lastithBit(int &a, int i)
{
    int mask = -1 << i;
    a = a & (mask);
}
void clearRangeofbits(int &a, int i, int j)
{
    int x = (~0) << (j + 1);
    int y = (1 << i) - 1;
    int mask = x | y;
    a = a & mask;
}
int main()
{
    int a = 31;
    int i = 1;
    int j = 3;
    // clear_lastithBit(a, i);
    // cout << "Cleared ith bit " << a << endl;
    clearRangeofbits(a, i, j);
    cout << "Cleared range of bits " << a << endl;
}