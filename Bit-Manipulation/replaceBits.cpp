/*
Replace Bits in N by M
You are given two 32-bit numbers, N and M, and two bit positions i and j.
Write a method
to set all bits between i and j in N
equal
to M.
M (becomes a substring of N locationed at and starting at j)
Example:
N =10000000000;
М =10101;
i = 2,j=6
Output:
1001010100
*/

#include <iostream>
using namespace std;

int clearBitsInRange(int &n, int i, int j)
{
    int a = -1 << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    n = n & mask;
}

int replaceBits(int &n, int i, int j, int m)
{
    clearBitsInRange(n, i, j);
    int mask = (m << i);
    n = n | mask;
}

int main()
{
    int n, m, i, j;
    cin >> n >> m >> i >> j;
    replaceBits(n, i, j, m);
    cout << n;
    return 0;
}